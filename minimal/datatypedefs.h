#ifndef __datatypedefs_h__
#define __datatypedefs_h__

//#define AP_INT_MAX_W 2048
#include "ap_int.h"


#if 0
#define IN_WordSize      512
#define IN_IntegerPart   256

#define OUT_WordSize     512
#define OUT_IntegerPart  256
#endif

#if 0
#define IN_WordSize      96
#define IN_IntegerPart   48

#define OUT_WordSize     96
#define OUT_IntegerPart  48
#endif



#define IN_WordSize       64
#define IN_FractionalPart 32
#define IN_IntegerPart    32


//#define IN_WordSize       40
//#define IN_FractionalPart 32
//#define IN_IntegerPart    8

//#define OUT_WordSize     48
//#define OUT_IntegerPart  16

typedef ap_fixed<IN_WordSize, IN_IntegerPart> data_t;

//typedef float data_t;

//typedef ap_fixed<IN_WordSize,IN_IntegerPart>   in_data_t;
//typedef ap_fixed<OUT_WordSize,OUT_IntegerPart> out_data_t;

//typedef ap_fixed<IN_WordSize,IN_IntegerPart>   t_fix_num;

//Stypedef ap_fixed<48,16>   t_fix_48_16;

typedef ap_ufixed<2,2> uint2_t;
typedef ap_ufixed<4,4> uint4_t;
typedef ap_ufixed<8,8> uint8bit_t;

template<typename T> struct tshared_data {

    T g1;
    T V;
    T sigma;
    T psins8;
    T psi6g1;
    T g2;
    T psi4g2;
    T h;

    T varFP_ztmp;
    T varFP_t1;
    T varFP_t2;
    T varFP_V;
    T varFP_Vt;
    T varFP_tmp1;
    T varFP_tmp2;

    T est8p8FP_t0;
    T est8p8FP_t9;

    T estg1FP_x;
    T estg1FP_g1;

    T k6xFP_t2;
    T k6xFP_x2;
    T k6xFP_x3;
    T k6xFP_x4;
    T k6xFP_x5;
    T k6xFP_x6;

    T psi6_FP_g1;
    T psi6_FP__N;

    T psi6_FP_tmpv;
    T psi6_FP_t;
    T psi6_FP_s;
    T psi6_FP_rslt;

    T psi6_FP_g2;
    T psi6_FP_g3;
    T psi6_FP_g4;
    T psi6_FP_g5;
    T psi6_FP_g6;
    T psi6_FP_g7;

    T k4xFP_x2;
    T k4xFP_x4;

    T psi4g2_FP__N;
    T psi4g2_FP_g2;
    T psi4g2_FP_t;
    T psi4g2_FP_s;
    T psi4g2_FP_rslt;

    T psi4g2_FP_gg2;
    T psi4g2_FP_gg3;
    T psi4g2_FP_gg4;
    T psi4g2_FP_gg5;


    T expFP_ai;
    T expFP_fx;
    int expFP_i;
    T expFP_poweroftwo;
    long int expFP_x_int;
    T expFP_z;
    T expFP_w[25];

    T lnFP_ai, lnFP_x;
    T lnFP_fx;
    int lnFP_i;
    int lnFP_k;
    T lnFP_poweroftwo;
    T lnFP_w[25];

} ;

const data_t number_0dot5 = (data_t)0.5;


const uint8bit_t reset_op = 0;

const uint8bit_t varest_reset_op = 10; // Ah,  1010b
const uint8bit_t varest_col_op = 11;   // Bh, 1011b
const uint8bit_t varest_fin_op = 12;   // Ch, 1100b

const uint8bit_t pumpdata_reset_op = 15; // Fh, 1111b
const uint8bit_t pumpdata_col_op = 16;   // 10h, 10000b

const uint8bit_t stddev_op = 20; // 14h

const uint8bit_t estg1_op = 25; // 19h

const uint8bit_t estpsi8_op = 30;  // 1Eh

const uint8bit_t estpsi6_reset_op = 40; // 28 h
const uint8bit_t estpsi6_setup_op = 41; // 29 h
const uint8bit_t estpsi6_col_op = 42;   // 2A h
const uint8bit_t estpsi6_fin_op = 43;   // 2B h
const uint8bit_t estpsi6_col_op_new = 44; // 2C h


const uint8bit_t estg2_op = 50;  // 32 h

const uint8bit_t estpsi4_reset_op = 60; // 3C h
const uint8bit_t estpsi4_setup_op = 61; // 3D h
const uint8bit_t estpsi4_col_op = 62;   // 3E h
const uint8bit_t estpsi4_fin_op = 63;   // 3F h
const uint8bit_t estpsi4_col_op_new = 64;   // 40 h

const uint8bit_t esth_op = 70; // 46 h

#endif // __datatypedefs_h__

