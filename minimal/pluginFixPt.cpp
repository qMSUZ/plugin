#include "datatypedefs.h"

#include "pluginfixpt.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#ifndef M_SQRT_OF_PI
#define M_SQRT_OF_PI 1.772453850905516
#endif

#ifndef M_TWO_PI
#define M_TWO_PI 6.283185307179586
#endif


const int A_LENGTH  = 25;


static const data_t lnFixPt_a[ A_LENGTH ] = {
    (data_t)1.648721270700128,    //  0
    (data_t)1.284025416687742,    //  1
    (data_t)1.133148453066826,    //  2
    (data_t)1.064494458917859,    //  3
    (data_t)1.031743407499103,    //  4
    (data_t)1.015747708586686,    //  5
    (data_t)1.007843097206488,    //  6
    (data_t)1.003913889338348,    //  7
    (data_t)1.001955033591003,    //  8
    (data_t)1.000977039492417,    //  9
    (data_t)1.000488400478694,    // 10
    (data_t)1.000244170429748,    // 11
    (data_t)1.000122077763384,    // 12
    (data_t)1.000061037018933,    // 13
    (data_t)1.000030518043791,    // 14
    (data_t)1.0000152589054785,   // 15
    (data_t)1.0000076294236351,   // 16
    (data_t)1.0000038147045416,   // 17
    (data_t)1.0000019073504518,   // 18
    (data_t)1.0000009536747712,   // 19
    (data_t)1.0000004768372719,   // 20
    (data_t)1.0000002384186075,   // 21
    (data_t)1.0000001192092967,   // 22
    (data_t)1.0000000596046466,   // 23
    (data_t)1.0000000298023228 }; // 24


static const data_t expFP_a[A_LENGTH] = {
        (data_t)1.648721270700128,    //  0
        (data_t)1.284025416687742,    //  1
        (data_t)1.133148453066826,    //  2
        (data_t)1.064494458917859,    //  3
        (data_t)1.031743407499103,    //  4
        (data_t)1.015747708586686,    //  5
        (data_t)1.007843097206488,    //  6
        (data_t)1.003913889338348,    //  7
        (data_t)1.001955033591003,    //  8
        (data_t)1.000977039492417,    //  9
        (data_t)1.000488400478694,    // 10
        (data_t)1.000244170429748,    // 11
        (data_t)1.000122077763384,    // 12
        (data_t)1.000061037018933,    // 13
        (data_t)1.000030518043791,    // 14
        (data_t)1.0000152589054785,   // 15
        (data_t)1.0000076294236351,   // 16
        (data_t)1.0000038147045416,   // 17
        (data_t)1.0000019073504518,   // 18
        (data_t)1.0000009536747712,   // 19
        (data_t)1.0000004768372719,   // 20
        (data_t)1.0000002384186075,   // 21
        (data_t)1.0000001192092967,   // 22
        (data_t)1.0000000596046466,   // 23
        (data_t)1.0000000298023228 }; // 24


static data_t g1;
static data_t V;
static data_t sigma;
static data_t psins8;
static data_t psi6g1;
static data_t g2;
static data_t psi4g2;
static data_t h;

static data_t varFP_ztmp;
static data_t varFP_t1;
static data_t varFP_t2;
static data_t varFP_V;
static data_t varFP_Vt;
static data_t varFP_tmp1;
static data_t varFP_tmp2;

static data_t est8p8FP_t0;
static data_t est8p8FP_t9;

static data_t estg1FP_x;
static data_t estg1FP_g1;

static data_t k6xFP_t2;
static data_t k6xFP_x2;

static data_t psi6_FP_g1;
static data_t psi6_FP__N;

static data_t psi6_FP_tmpv;
static data_t psi6_FP_t;
static data_t psi6_FP_s;
static data_t psi6_FP_rslt;

static data_t psi6_FP_g7;

static data_t k4xFP_x2;
static data_t k4xFP_x4;

static data_t psi4g2_FP__N;
static data_t psi4g2_FP_g2;
static data_t psi4g2_FP_t;
static data_t psi4g2_FP_s;
static data_t psi4g2_FP_rslt;

static data_t psi4g2_FP_gg2;
static data_t psi4g2_FP_gg5;

static data_t expFP_ai;
static data_t expFP_fx;
static int expFP_i;
static data_t expFP_poweroftwo;
static long int expFP_x_int;
static data_t expFP_z;
static data_t expFP_w[25];

static data_t lnFP_ai, lnFP_x;
static data_t lnFP_fx;
static int lnFP_i;
static int lnFP_k;
static data_t lnFP_poweroftwo;
static data_t lnFP_w[25];

static data_t totalDataLen;

int wbufLen;

int wbuf1Len;
int wbuf2Len;
int wbuf3Len;
int wbuf4Len;


int wbufIdx;

int wbuf1Idx;
int wbuf2Idx;
int wbuf3Idx;
int wbuf4Idx;


data_t wbuf[32768];

static data_t fADD(const data_t &a, const data_t &b)
{
#pragma HLS inline off
    return (data_t)a+b;
}

static data_t fMUL(const data_t &a, const data_t &b)
{
#pragma HLS inline off
	return (data_t)(a * b);
}

data_t reciprocalFixPt(const data_t &v)
{
    const data_t zero_dot_five = 0.5;
    const data_t one = 1.0;
    const data_t two = 2.0;

    size_t i, useSign;

    unsigned char shift = 0;
    unsigned char shiftLeft = 0;


    data_t z = 0.0;

    data_t D;


    if( v < (data_t)0.0 )
    {
        useSign = 1;
        D=-v;
    }
    else
    {
        useSign = 0;
        D=v;
    }

    if (D > one )
    {
        for(i=(IN_WordSize-IN_IntegerPart);i<IN_WordSize;i++)
        {
            if ( D[i] == 1) shift = i-(IN_WordSize-IN_IntegerPart)+1;
        }

        D = D >> shift;
    }

        if (D < zero_dot_five )
        {
            for(i=0;i<(IN_WordSize-IN_IntegerPart)-1;i++)
            {
                if ( D[i] == 1) shiftLeft = ((IN_WordSize-IN_IntegerPart-1)-i);
            }

            D = D << shiftLeft;
        }

    data_t x = fADD((data_t)(2.823529411764706), -fMUL((data_t)(2.294117647058823), D));

reciFP_loop1:
    for(i=0;i<4;i++)
    {
        x = fMUL( x, fADD(two, -fMUL(x,D)));
    }

    if (shift > 0)
    {
        z = (data_t)(x >> shift) ;
    }

    if (shiftLeft > 0)
    {
        z = (data_t)(x << shiftLeft) ;
    }

    if ( (shift==0) && (shiftLeft==0) )
    {
        z = (data_t)x;
    }

    if(useSign == 1)
    {
        z=-z;
    }

    return z;
}

//
// 
// based on J.Burkardt library
// available at http://people.sc.fsu.edu/~jburkardt/c_src/cordic/cordic.html
//
data_t lnFixPt(const data_t &v)
{
    const int NormsSteps = 25;
    const int n = 7;

  const data_t e = (data_t)2.718281828459045;
  const data_t einv = (data_t)0.367879441171442;

  lnFP_x = v;

  if ( lnFP_x <= (data_t)0.0 )
  {
    return (data_t)0.0;
  }

  lnFP_k = (data_t)0.0;


  for(lnFP_i=0;lnFP_i<NormsSteps;lnFP_i++)
  {
    if( e <= lnFP_x)
    {
        lnFP_k = fADD(lnFP_k, (data_t)1.0);

        lnFP_x = fMUL(lnFP_x, einv);
    }
  }

  for(lnFP_i=0;lnFP_i<NormsSteps;lnFP_i++)
  {
    if ( lnFP_x < (data_t)1.0)
    {
        lnFP_k = fADD(lnFP_k, -1.0);

        lnFP_x = fMUL(lnFP_x, e);
    }
  }

  for ( lnFP_i = 0; lnFP_i < n; lnFP_i++ )
  {
    lnFP_w[ lnFP_i ] = (data_t)0.0;

    if ( lnFP_i < A_LENGTH )
    {
      lnFP_ai = lnFixPt_a[ lnFP_i ];
    }
    else
    {
      lnFP_ai = fADD(1.0,  fADD( lnFP_ai, -1.0 ) >> 1);

    }

    if ( lnFP_ai < lnFP_x )
    {
      lnFP_w[ lnFP_i ] = (data_t)1.0;
      lnFP_x = fMUL(lnFP_x, reciprocalFixPt( lnFP_ai ));
    }
  }

  lnFP_x = fADD(lnFP_x, -1.0);

  lnFP_x = fMUL(lnFP_x, ( fMUL( fADD(1.0, -(lnFP_x >> 1 ))
    , ( fMUL(fADD(1.0, ( fMUL( lnFP_x, (data_t)0.3333333333))), fADD( (data_t)1.0 , -(lnFP_x >> 2) ))))));

  lnFP_poweroftwo = (data_t)0.5;

  for ( lnFP_i = 0; lnFP_i < n; lnFP_i++ )
  {
    lnFP_x = fADD(lnFP_x, fMUL(lnFP_w[ lnFP_i ], lnFP_poweroftwo));
    lnFP_poweroftwo = lnFP_poweroftwo >> 1;
  }

  lnFP_fx = fADD(lnFP_x, lnFP_k);

  return lnFP_fx;
}

inline long int ifloor( data_t x )
{
    if (x >= 0)
    {
        return (long int)x;
    }
    else
    {
        long  y = (long int)x;
        return ((data_t)y == x) ? y : y - 1;
    }
}


//
// 
// based on J.Burkardt library
// available at http://people.sc.fsu.edu/~jburkardt/c_src/cordic/cordic.html
//
data_t expFixPt ( const data_t &x )
{
    const int A_LENGTH  = 25;
    const int n = 7;

    const data_t e = (data_t)2.718281828459045;
    const data_t einv = (data_t)0.367879441171442;

    expFP_x_int = ( long int ) ( ifloor ( x ) );

	expFP_poweroftwo = (data_t)0.5;
	expFP_z = fADD(x, -expFP_x_int );


  for ( expFP_i = 0; expFP_i < n; expFP_i++ )
  {
    expFP_w[ expFP_i ] = (data_t)0.0;
    if ( expFP_poweroftwo < expFP_z )
    {
      expFP_w[ expFP_i ] = (data_t)1.0;
      expFP_z = expFP_z - expFP_poweroftwo;
    }
    expFP_poweroftwo = expFP_poweroftwo  >> 1;
  }

  expFP_fx = (data_t)1.0;

  for ( expFP_i = 0; expFP_i < n; expFP_i++ )
  {
    if ( expFP_i < A_LENGTH )
    {
      expFP_ai = expFP_a[ expFP_i ];
    }
    else
    {
      expFP_ai = fADD(1.0, fADD( expFP_ai, -1.0 ) >> 1);
    }

    if ( (data_t)0.0 < expFP_w[ expFP_i ] )
    {
      expFP_fx = fMUL(expFP_fx, expFP_ai);
    }
  }

  expFP_fx = fMUL(expFP_fx,  fADD( (data_t)1.0, fMUL(expFP_z, fADD( (data_t)1.0 , fMUL( (expFP_z >> 1)
    , fMUL( fADD((data_t)1.0, fMUL(expFP_z , (data_t)0.33333333333))
    , ( fADD((data_t)1.0, (expFP_z >> 2)) )))))) );
  if ( expFP_x_int < 0 )
  {
    for ( expFP_i = 1; expFP_i <= -expFP_x_int; expFP_i++ )
    {
      expFP_fx = fMUL(expFP_fx, einv);
    }
  }
  else
  {
    for ( expFP_i = 1; expFP_i <= expFP_x_int; expFP_i++ )
    {
      expFP_fx = fMUL(expFP_fx, e);
    }
  }

  return expFP_fx;
}


data_t powerxyFixPt(const data_t &x, const data_t &y )
{
    return expFixPt(fMUL(y, lnFixPt(x)));
}


data_t varianceFixPt( const data_t &v, const uint8bit_t &op )
{
    static data_t tt1;

    if( op == varest_reset_op )
    {
        varFP_ztmp = (data_t)(0.0);
        varFP_t1 = (data_t)(0.0);
        varFP_t2 = (data_t)(0.0);
        varFP_V = (data_t)(0.0);
        varFP_Vt = (data_t)(0.0);
    }

    if( op == varest_col_op)
    {
        varFP_t1 = fADD( varFP_t1, v );

        tt1 = fMUL(v, v);
        varFP_t2 = fADD(varFP_t2, tt1);
    }

    if( op == varest_fin_op)
    {
         tt1 = fADD(v, (data_t)-1.0);
         varFP_tmp1 = reciprocalFixPt( fMUL(v, tt1) );
         varFP_tmp2 = reciprocalFixPt( tt1 );

         tt1 = fMUL(varFP_t1, varFP_t1);
         varFP_Vt = fMUL(varFP_tmp1, tt1) ;
         tt1=fMUL(varFP_tmp2, varFP_t2);
         varFP_V = fADD(tt1, -varFP_Vt);

         varFP_ztmp = varFP_V;
    }

    return varFP_ztmp;
}

data_t standard_deviationFixPt( const data_t &v )
{
   return powerxyFixPt( v, (data_t)0.5 );
}

data_t estimatepsi8_FixPt( const data_t &t )
{
    return (data_t)1.851247071016076;
}



data_t estimate_g1_FixPt(const data_t &t, const data_t &_N )
{
    const data_t mi2k = (data_t)1.0;
    const data_t y = (data_t)0.111111111111111;

    estg1FP_x = (data_t)fMUL((11.968268412042981), reciprocalFixPt( fMUL( mi2k, fMUL(t, _N) ) ));

    estg1FP_g1 = powerxyFixPt ( estg1FP_x, y ) ;

    return estg1FP_g1;
}


data_t fnc_k6x_FixPt( const data_t &x )
{
    const data_t t1 = 0.398942280401433;

    data_t tmp1, tmp2;

    k6xFP_x2 = fMUL(x,x);

    tmp1 = -(k6xFP_x2 >> 1);
    tmp1 = expFixPt( tmp1 );
    tmp2 = fADD(-15, k6xFP_x2);
    tmp2 = fMUL(k6xFP_x2,tmp2);
    k6xFP_t2 = fMUL(tmp1, fADD((data_t)-15.0, fMUL(k6xFP_x2, fADD(45, tmp2))) );


    return fMUL( t1, k6xFP_t2);
}

data_t estimate_psi6_FixPt( const data_t &v1, const data_t &v2, const uint8bit_t &op )
{
    size_t i, j;

    data_t tmp1, tmp2;

    const data_t K6zero = (data_t)-5.984134206021491;

    if( op == estpsi6_reset_op )
    {
        psi6_FP_g1   = (data_t)0.0;
        psi6_FP__N   = (data_t)0.0;
        psi6_FP_tmpv = (data_t)0.0;
        psi6_FP_t    = (data_t)0.0;
        psi6_FP_s    = (data_t)0.0;
        psi6_FP_rslt = (data_t)0.0;
        psi6_FP_g7   = (data_t)0.0;
    }

    if( op == estpsi6_setup_op )
    {
        psi6_FP_g1 = v1;
        psi6_FP_g7 = v1;
        psi6_FP__N = v2;

        for(i=0;i<6;i++)
                psi6_FP_g7 = fMUL(psi6_FP_g7, psi6_FP_g1);


        psi6_FP_g1 = reciprocalFixPt(v1);

        tmp1 = fMUL(psi6_FP__N, psi6_FP__N);
        tmp2 = fMUL(tmp1, psi6_FP_g7);
        psi6_FP_t = reciprocalFixPt( tmp2 );

        psi6_FP_s = (data_t)0.0;

      psi6_FP_rslt = psi6_FP_s;
    }

    if( op == estpsi6_col_op_new )
    {
        psi6_f1: for( i=0; i<totalDataLen; i ++)
        {
        	psi6_f2: for(j=i+1; j<totalDataLen; j++)
            {
                tmp1 = fADD(wbuf[i], -wbuf[j]);
                psi6_FP_tmpv = fMUL(tmp1, psi6_FP_g1);
                psi6_FP_s = fADD(psi6_FP_s, fnc_k6x_FixPt( psi6_FP_tmpv ));
            }
        }
    }

    if( op == estpsi6_fin_op )
    {
        psi6_FP_tmpv = fMUL(psi6_FP__N, K6zero);
        psi6_FP_rslt = fMUL(psi6_FP_t, fADD( fMUL(2.0, psi6_FP_s), psi6_FP_tmpv ));
    }

    return (data_t)psi6_FP_rslt;
}



data_t estimate_g2_FixPt( const data_t &psi6g1, const data_t &_N )
{
    const data_t mi2k = 1.0;
    const data_t k40 = 1.196826841204298;

    g2 = (data_t)powerxyFixPt( fMUL(fMUL((data_t)-2.0, k40), reciprocalFixPt( fMUL(mi2k, fMUL(psi6g1, _N))) ), (data_t)(0.14285714285714285714285714285714) );

    return g2;
}


data_t fnc_k4x_FixPt(const data_t &x )
{
    const data_t t1 = 0.398942280401433;


    k4xFP_x2 = fMUL(x, x);

    return  fMUL(t1, fMUL(expFixPt( fMUL((data_t)-0.5, k4xFP_x2)), fADD(3.0, fMUL(k4xFP_x2,fADD(-6, k4xFP_x2)))));
}

data_t estimate_psi4g2_FixPt( const data_t &v1, const data_t &v2, const uint8bit_t &op )
{
    size_t i, j;

    const data_t K4zero = (data_t)1.196826841204298;


    if ( op == estpsi4_reset_op )
    {
          psi4g2_FP__N = (data_t)0.0;
          psi4g2_FP_g2 = (data_t)0.0;
           psi4g2_FP_t = (data_t)0.0;
           psi4g2_FP_s = (data_t)0.0;
        psi4g2_FP_rslt = (data_t)0.0;
        psi4g2_FP_gg2  = (data_t)0.0;
    }

    if ( op == estpsi4_setup_op )
    {
        psi4g2_FP_g2 = v1;
        psi4g2_FP_gg5 = v1;
        psi4g2_FP__N = v2;

        for(i=0;i<4;i++)
            psi4g2_FP_gg5 = fMUL(psi4g2_FP_gg5, v1);

        psi4g2_FP_t = reciprocalFixPt( fMUL( fMUL(psi4g2_FP__N, psi4g2_FP__N), psi4g2_FP_gg5) )  ;
        psi4g2_FP_s = (data_t)0.0;

        psi4g2_FP_g2 = reciprocalFixPt( v1 );

        psi4g2_FP_rslt = psi4g2_FP_s;
    }

    if ( op == estpsi4_col_op_new )
    {
    		psi4_f1: for( i=0; i<totalDataLen; i++ )
            {
                psi4_f2: for(j=i+1; j<totalDataLen; j++ )
                {
                    psi4g2_FP_s = fADD(psi4g2_FP_s, fnc_k4x_FixPt( fMUL(fADD( wbuf[i], -wbuf[j] ), psi4g2_FP_g2) ) );
                }
            }
    }

    if ( op == estpsi4_fin_op )
    {
            psi4g2_FP_rslt = fMUL(psi4g2_FP_t, fADD( fMUL(2.0, psi4g2_FP_s), fMUL(psi4g2_FP__N, K4zero) ));
    }

    return psi4g2_FP_rslt;
}



data_t estimate_h_FixPt( const data_t &psi4g2, const data_t &_N )
{

    const data_t mi2k = 1.0;
    const data_t rk = (data_t)0.282094791773878;

    return powerxyFixPt( fMUL(rk, reciprocalFixPt( fMUL( fMUL(mi2k, psi4g2), _N) )), (data_t)(0.20000) );
}

void pumpdataFixPt(const data_t &v1)
{
    wbuf[ wbufIdx ] = v1;
    wbufIdx++;

}

data_t pluginFixPt(const uint8bit_t &op, const data_t &v1)
{

    if (op == reset_op)
    {
      totalDataLen = (data_t)0.0;
                g1 = (data_t)0.0;
                 V = (data_t)1.0;
             sigma = (data_t)1.0;
            psins8 = (data_t)0.0;
            psi6g1 = (data_t)0.0;
                g2 = (data_t)0.0;
            psi4g2 = (data_t)0.0;
                 h = (data_t)0.0;
    }

    if( op == pumpdata_reset_op )
    {
        totalDataLen = v1;

        wbufLen = totalDataLen;

        wbufIdx  = 0;

        h = totalDataLen;
    }

    if( op == pumpdata_col_op )
    {
        pumpdataFixPt( v1 );
    }


    if(op == varest_fin_op)
    {
             h = V;
    }

    if(op == stddev_op)
    {
            h = sigma;
    }

    if(op == estpsi8_op)
    {
            psins8 = (data_t)1.851247071016076;
            h = psins8;
	}

	if(op == estg1_op)
	{
            g1 = estimate_g1_FixPt(v1, totalDataLen );
            h = g1;
	}

	if(op == estpsi6_reset_op)
	{
            psi6g1 = estimate_psi6_FixPt( (data_t)0.0, (data_t)0.0, estpsi6_reset_op );
            h = psi6g1;
	}

	if(op == estpsi6_setup_op)
	{
            psi6g1 = estimate_psi6_FixPt( v1, totalDataLen, estpsi6_setup_op );
            h = psi6g1;
	}

	if(op == estpsi6_col_op_new)
	{
            psi6g1 = estimate_psi6_FixPt( v1, (data_t)0.0, estpsi6_col_op_new );
            h = psi6g1;
	}

	if(op == estpsi6_fin_op)
	{
            psi6g1 = estimate_psi6_FixPt( (data_t)0.0, (data_t)0.0, estpsi6_fin_op );
            h = psi6g1;
	}

	if(op == estg2_op)
	{
            g2 =estimate_g2_FixPt( v1, totalDataLen );
            h = g2;
	}

	if(op == estpsi4_reset_op)
	{
            psi4g2 =estimate_psi4g2_FixPt( (data_t)0.0, (data_t)0.0, estpsi4_reset_op );
            h = psi4g2;
	}

	if(op == estpsi4_setup_op)
	{
            psi4g2 = estimate_psi4g2_FixPt( v1, totalDataLen, estpsi4_setup_op );
            h = psi4g2;
	}

	if(op == estpsi4_col_op_new)
	{
            psi4g2 = estimate_psi4g2_FixPt( v1, (data_t)0.0, estpsi4_col_op_new );
            h = psi4g2;
	}

	if(op == estpsi4_fin_op)
	{
            psi4g2 = estimate_psi4g2_FixPt( (data_t)0.0, (data_t)0.0, estpsi4_fin_op );
            h = psi4g2;
	}

	if(op == esth_op)
	{
            h = estimate_h_FixPt( v1, totalDataLen );
    }


    return h;
}
