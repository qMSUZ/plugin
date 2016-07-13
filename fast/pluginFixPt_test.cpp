#include <iostream>

#include "datatypedefs.h"
#include "pluginFixPt.h"

#include "uVector.h"

using namespace std;

//#define USE_VIVADO_HLS


// zbiór I
size_t N10 = 10;
size_t N128 = 128;
size_t N1024 = 1024;

uVector<data_t, 32768> es1_mean_0_sd_1_n_10_fixpt;
// avg: 0.132202781295968
// std dev: 0.780585957509562
//const data_t stddev = 0.780585957509562; // dla 10
//const data_t stddev = 0.331415; // dla 1024

data_t stddev ;


// zbiór II
//size_t N10 = 3;
//uVector<data_t, 3> es1_mean_0_sd_1_n_10_fixpt;
// avg: 3.766666666666667
// std dev: 1.078579312490896
//const data_t stddev = 1.078579312490896;

void prepare_data_ext_set_3_3_3_5()
{
    es1_mean_0_sd_1_n_10_fixpt.size = 3;
    es1_mean_0_sd_1_n_10_fixpt.m[ 0] = 3;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1] = 3.3;
    es1_mean_0_sd_1_n_10_fixpt.m[ 2] = 5;
}

void prepare_data_ext_set_3_3_3_5_zscore_n_3_fixedpoint()
{
    data_t v;

    es1_mean_0_sd_1_n_10_fixpt.size = 3;
    es1_mean_0_sd_1_n_10_fixpt.m[ 0] = -0.710811581297725;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1] = -0.432667919050790;
    es1_mean_0_sd_1_n_10_fixpt.m[ 2] =  1.143479500348514;


    cout << "begin data as hex" << endl;

    for(size_t i=0;i<N10;i++)
    {
        v = es1_mean_0_sd_1_n_10_fixpt.m[i];
        cout << setw(5) << v << " as bits in hex " << hex << v.bits_to_uint64() << endl;
    }
    v=(data_t)3.0;
    cout << setw(5) << v << " as bits in hex " << hex << v.bits_to_uint64() << endl;
    cout << "end data as hex" << endl;
}


void prepare_data_ext_set_1_mean_0_sd_1_n_10_fixedpoint()
{
    es1_mean_0_sd_1_n_10_fixpt.size = 10;
    es1_mean_0_sd_1_n_10_fixpt.m[ 0] = -0.6264538107423325286049;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1] =  0.1836433242220822381618;
    es1_mean_0_sd_1_n_10_fixpt.m[ 2] = -0.8356286124100470447118;
    es1_mean_0_sd_1_n_10_fixpt.m[ 3] =  1.5952808021377915537187;
    es1_mean_0_sd_1_n_10_fixpt.m[ 4] =  0.3295077718153605617069;
    es1_mean_0_sd_1_n_10_fixpt.m[ 5] = -0.8204683841180153702766;
    es1_mean_0_sd_1_n_10_fixpt.m[ 6] =  0.4874290524284852210712;
    es1_mean_0_sd_1_n_10_fixpt.m[ 7] =  0.7383247051292173290804;
    es1_mean_0_sd_1_n_10_fixpt.m[ 8] =  0.5757813516534920905698;
    es1_mean_0_sd_1_n_10_fixpt.m[ 9] = -0.3053883871563560226114;
}




void prepare_data_ext_set_1_zscore_n_10_fixedpoint()
{
    data_t v;

    es1_mean_0_sd_1_n_10_fixpt.size = 10;
    es1_mean_0_sd_1_n_10_fixpt.m[ 0] = -0.971906533469771;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1] =  0.065899908179535;
    es1_mean_0_sd_1_n_10_fixpt.m[ 2] = -1.239878048528895;
    es1_mean_0_sd_1_n_10_fixpt.m[ 3] =  1.874333001723133;
    es1_mean_0_sd_1_n_10_fixpt.m[ 4] =  0.252765231838001;
    es1_mean_0_sd_1_n_10_fixpt.m[ 5] = -1.220456448452460;
    es1_mean_0_sd_1_n_10_fixpt.m[ 6] =  0.455076430359902;
    es1_mean_0_sd_1_n_10_fixpt.m[ 7] =  0.776496064273389;
    es1_mean_0_sd_1_n_10_fixpt.m[ 8] =  0.568263579545742;
    es1_mean_0_sd_1_n_10_fixpt.m[ 9] = -0.560593185468576;


    cout << "begin data as hex" << endl;

    for(int i=0;i<10;i++)
    {
        v = es1_mean_0_sd_1_n_10_fixpt.m[i];
        cout << setw(5) << v << " as bits in hex " << hex << v.bits_to_uint64() << endl;
    }
    v=(data_t)10.0;
    cout << setw(5) << v << " as bits in hex " << hex << v.bits_to_uint64() << endl;
    cout << "end data as hex" << endl;
}


void prepare_data_random_n_128_fixedpoint()
{
    es1_mean_0_sd_1_n_10_fixpt.size = 128;

    es1_mean_0_sd_1_n_10_fixpt.m[    0] = 0.4927583868;
    es1_mean_0_sd_1_n_10_fixpt.m[    1] = -1.46500776;
    es1_mean_0_sd_1_n_10_fixpt.m[    2] = 0.4616726979;
    es1_mean_0_sd_1_n_10_fixpt.m[    3] = 1.064313561;
    es1_mean_0_sd_1_n_10_fixpt.m[    4] = 1.660526535;
    es1_mean_0_sd_1_n_10_fixpt.m[    5] = -1.212107241;
    es1_mean_0_sd_1_n_10_fixpt.m[    6] = 0.9038271061;
    es1_mean_0_sd_1_n_10_fixpt.m[    7] = 0.161458706;
    es1_mean_0_sd_1_n_10_fixpt.m[    8] = 1.378858582;
    es1_mean_0_sd_1_n_10_fixpt.m[    9] = -0.04887022614;
    es1_mean_0_sd_1_n_10_fixpt.m[   10] = -1.753314352;
    es1_mean_0_sd_1_n_10_fixpt.m[   11] = 0.2733671858;
    es1_mean_0_sd_1_n_10_fixpt.m[   12] = -0.7299102501;
    es1_mean_0_sd_1_n_10_fixpt.m[   13] = 1.325011847;
    es1_mean_0_sd_1_n_10_fixpt.m[   14] = -1.639192993;
    es1_mean_0_sd_1_n_10_fixpt.m[   15] = -1.628866222;
    es1_mean_0_sd_1_n_10_fixpt.m[   16] = 0.3832735363;
    es1_mean_0_sd_1_n_10_fixpt.m[   17] = 1.602254041;
    es1_mean_0_sd_1_n_10_fixpt.m[   18] = -0.09702669992;
    es1_mean_0_sd_1_n_10_fixpt.m[   19] = -1.257734709;
    es1_mean_0_sd_1_n_10_fixpt.m[   20] = -0.2855429621;
    es1_mean_0_sd_1_n_10_fixpt.m[   21] = 0.8525093759;
    es1_mean_0_sd_1_n_10_fixpt.m[   22] = 0.8786424296;
    es1_mean_0_sd_1_n_10_fixpt.m[   23] = 0.6413374417;
    es1_mean_0_sd_1_n_10_fixpt.m[   24] = 0.6948680517;
    es1_mean_0_sd_1_n_10_fixpt.m[   25] = 0.7335407562;
    es1_mean_0_sd_1_n_10_fixpt.m[   26] = 0.1665167164;
    es1_mean_0_sd_1_n_10_fixpt.m[   27] = 1.05398679;
    es1_mean_0_sd_1_n_10_fixpt.m[   28] = -1.300517047;
    es1_mean_0_sd_1_n_10_fixpt.m[   29] = -0.8475089916;
    es1_mean_0_sd_1_n_10_fixpt.m[   30] = -1.570277601;
    es1_mean_0_sd_1_n_10_fixpt.m[   31] = -0.6985084356;
    es1_mean_0_sd_1_n_10_fixpt.m[   32] = 0.4666253331;
    es1_mean_0_sd_1_n_10_fixpt.m[   33] = 1.496457324;
    es1_mean_0_sd_1_n_10_fixpt.m[   34] = 1.109835654;
    es1_mean_0_sd_1_n_10_fixpt.m[   35] = -1.152886369;
    es1_mean_0_sd_1_n_10_fixpt.m[   36] = 0.1201516211;
    es1_mean_0_sd_1_n_10_fixpt.m[   37] = -0.2318016018;
    es1_mean_0_sd_1_n_10_fixpt.m[   38] = 0.3068765046;
    es1_mean_0_sd_1_n_10_fixpt.m[   39] = -0.06320125563;
    es1_mean_0_sd_1_n_10_fixpt.m[   40] = -0.04876485094;
    es1_mean_0_sd_1_n_10_fixpt.m[   41] = 0.4489222968;
    es1_mean_0_sd_1_n_10_fixpt.m[   42] = 0.3932841823;
    es1_mean_0_sd_1_n_10_fixpt.m[   43] = -0.8464552395;
    es1_mean_0_sd_1_n_10_fixpt.m[   44] = 0.1043453387;
    es1_mean_0_sd_1_n_10_fixpt.m[   45] = 0.6252150338;
    es1_mean_0_sd_1_n_10_fixpt.m[   46] = -1.442562839;
    es1_mean_0_sd_1_n_10_fixpt.m[   47] = -0.1249511323;
    es1_mean_0_sd_1_n_10_fixpt.m[   48] = 0.4352235186;
    es1_mean_0_sd_1_n_10_fixpt.m[   49] = 0.1113001029;
    es1_mean_0_sd_1_n_10_fixpt.m[   50] = -1.059840053;
    es1_mean_0_sd_1_n_10_fixpt.m[   51] = 1.374959699;
    es1_mean_0_sd_1_n_10_fixpt.m[   52] = 0.838494472;
    es1_mean_0_sd_1_n_10_fixpt.m[   53] = 0.8971884677;
    es1_mean_0_sd_1_n_10_fixpt.m[   54] = -0.8195845592;
    es1_mean_0_sd_1_n_10_fixpt.m[   55] = 1.633655855;
    es1_mean_0_sd_1_n_10_fixpt.m[   56] = -1.57428186;
    es1_mean_0_sd_1_n_10_fixpt.m[   57] = -1.217586752;
    es1_mean_0_sd_1_n_10_fixpt.m[   58] = 0.4105657178;
    es1_mean_0_sd_1_n_10_fixpt.m[   59] = -1.139292966;
    es1_mean_0_sd_1_n_10_fixpt.m[   60] = -1.073328081;
    es1_mean_0_sd_1_n_10_fixpt.m[   61] = 1.39719387;
    es1_mean_0_sd_1_n_10_fixpt.m[   62] = 0.2361697343;
    es1_mean_0_sd_1_n_10_fixpt.m[   63] = -0.8241156936;
    es1_mean_0_sd_1_n_10_fixpt.m[   64] = -0.7401316462;
    es1_mean_0_sd_1_n_10_fixpt.m[   65] = 1.505624967;
    es1_mean_0_sd_1_n_10_fixpt.m[   66] = -0.9781742604;
    es1_mean_0_sd_1_n_10_fixpt.m[   67] = 1.635236484;
    es1_mean_0_sd_1_n_10_fixpt.m[   68] = 0.07979291328;
    es1_mean_0_sd_1_n_10_fixpt.m[   69] = -1.505893344;
    es1_mean_0_sd_1_n_10_fixpt.m[   70] = -0.2635195418;
    es1_mean_0_sd_1_n_10_fixpt.m[   71] = -0.8726936684;
    es1_mean_0_sd_1_n_10_fixpt.m[   72] = -1.65710678;
    es1_mean_0_sd_1_n_10_fixpt.m[   73] = 0.3895960499;
    es1_mean_0_sd_1_n_10_fixpt.m[   74] = 0.6029808631;
    es1_mean_0_sd_1_n_10_fixpt.m[   75] = 0.8566190093;
    es1_mean_0_sd_1_n_10_fixpt.m[   76] = 1.432494567;
    es1_mean_0_sd_1_n_10_fixpt.m[   77] = -0.8207436865;
    es1_mean_0_sd_1_n_10_fixpt.m[   78] = -1.212634117;
    es1_mean_0_sd_1_n_10_fixpt.m[   79] = 0.9888649059;
    es1_mean_0_sd_1_n_10_fixpt.m[   80] = -0.9258027778;
    es1_mean_0_sd_1_n_10_fixpt.m[   81] = 0.2493416364;
    es1_mean_0_sd_1_n_10_fixpt.m[   82] = 0.9199495143;
    es1_mean_0_sd_1_n_10_fixpt.m[   83] = -0.6861795352;
    es1_mean_0_sd_1_n_10_fixpt.m[   84] = 0.1887508871;
    es1_mean_0_sd_1_n_10_fixpt.m[   85] = -1.418326539;
    es1_mean_0_sd_1_n_10_fixpt.m[   86] = -0.01599315833;
    es1_mean_0_sd_1_n_10_fixpt.m[   87] = -1.500940709;
    es1_mean_0_sd_1_n_10_fixpt.m[   88] = -1.599361161;
    es1_mean_0_sd_1_n_10_fixpt.m[   89] = -0.2100943073;
    es1_mean_0_sd_1_n_10_fixpt.m[   90] = 0.6873864112;
    es1_mean_0_sd_1_n_10_fixpt.m[   91] = 0.9190011374;
    es1_mean_0_sd_1_n_10_fixpt.m[   92] = 0.9732693739;
    es1_mean_0_sd_1_n_10_fixpt.m[   93] = -0.6497197105;
    es1_mean_0_sd_1_n_10_fixpt.m[   94] = 1.057991048;
    es1_mean_0_sd_1_n_10_fixpt.m[   95] = -1.307261061;
    es1_mean_0_sd_1_n_10_fixpt.m[   96] = -1.29935792;
    es1_mean_0_sd_1_n_10_fixpt.m[   97] = 0.846292238;
    es1_mean_0_sd_1_n_10_fixpt.m[   98] = -1.431603817;
    es1_mean_0_sd_1_n_10_fixpt.m[   99] = 0.6319590476;
    es1_mean_0_sd_1_n_10_fixpt.m[  100] = 1.169583402;
    es1_mean_0_sd_1_n_10_fixpt.m[  101] = 0.3917035542;
    es1_mean_0_sd_1_n_10_fixpt.m[  102] = 1.041025638;
    es1_mean_0_sd_1_n_10_fixpt.m[  103] = -0.0441283409;
    es1_mean_0_sd_1_n_10_fixpt.m[  104] = 1.106885148;
    es1_mean_0_sd_1_n_10_fixpt.m[  105] = 0.7890734952;
    es1_mean_0_sd_1_n_10_fixpt.m[  106] = 0.144493296;
    es1_mean_0_sd_1_n_10_fixpt.m[  107] = -1.013158832;
    es1_mean_0_sd_1_n_10_fixpt.m[  108] = -0.8653174031;
    es1_mean_0_sd_1_n_10_fixpt.m[  109] = -0.1492928073;
    es1_mean_0_sd_1_n_10_fixpt.m[  110] = -1.771333514;
    es1_mean_0_sd_1_n_10_fixpt.m[  111] = 1.588766013;
    es1_mean_0_sd_1_n_10_fixpt.m[  112] = 0.9880219041;
    es1_mean_0_sd_1_n_10_fixpt.m[  113] = -0.8252748209;
    es1_mean_0_sd_1_n_10_fixpt.m[  114] = 1.419111915;
    es1_mean_0_sd_1_n_10_fixpt.m[  115] = -0.2140985655;
    es1_mean_0_sd_1_n_10_fixpt.m[  116] = 1.117949546;
    es1_mean_0_sd_1_n_10_fixpt.m[  117] = -1.47712591;
    es1_mean_0_sd_1_n_10_fixpt.m[  118] = 0.6601996056;
    es1_mean_0_sd_1_n_10_fixpt.m[  119] = -0.01114589837;
    es1_mean_0_sd_1_n_10_fixpt.m[  120] = -0.6000879835;
    es1_mean_0_sd_1_n_10_fixpt.m[  121] = 1.37295757;
    es1_mean_0_sd_1_n_10_fixpt.m[  122] = -1.349095022;
    es1_mean_0_sd_1_n_10_fixpt.m[  123] = 1.318373208;
    es1_mean_0_sd_1_n_10_fixpt.m[  124] = -0.7372865153;
    es1_mean_0_sd_1_n_10_fixpt.m[  125] = 0.2458642542;
    es1_mean_0_sd_1_n_10_fixpt.m[  126] = 0.7746370905;
    es1_mean_0_sd_1_n_10_fixpt.m[  127] = -0.9230630221;
 }



void prepare_data_random_n_1024_fixedpoint()
{
    es1_mean_0_sd_1_n_10_fixpt.size = 1024;

    es1_mean_0_sd_1_n_10_fixpt.m[    0] = 0.9512035111;
    es1_mean_0_sd_1_n_10_fixpt.m[    1] = -1.341767232;
    es1_mean_0_sd_1_n_10_fixpt.m[    2] = -0.9768075007;
    es1_mean_0_sd_1_n_10_fixpt.m[    3] = 0.9207282586;
    es1_mean_0_sd_1_n_10_fixpt.m[    4] = -0.6348900332;
    es1_mean_0_sd_1_n_10_fixpt.m[    5] = -0.7484023848;
    es1_mean_0_sd_1_n_10_fixpt.m[    6] = -0.258249891;
    es1_mean_0_sd_1_n_10_fixpt.m[    7] = 0.3823675252;
    es1_mean_0_sd_1_n_10_fixpt.m[    8] = 0.1036304596;
    es1_mean_0_sd_1_n_10_fixpt.m[    9] = 1.656594112;
    es1_mean_0_sd_1_n_10_fixpt.m[   10] = 0.5267798719;
    es1_mean_0_sd_1_n_10_fixpt.m[   11] = -1.092974491;
    es1_mean_0_sd_1_n_10_fixpt.m[   12] = 0.3206737214;
    es1_mean_0_sd_1_n_10_fixpt.m[   13] = 0.9444076358;
    es1_mean_0_sd_1_n_10_fixpt.m[   14] = -0.8437570075;
    es1_mean_0_sd_1_n_10_fixpt.m[   15] = 0.2538830112;
    es1_mean_0_sd_1_n_10_fixpt.m[   16] = -0.8008580459;
    es1_mean_0_sd_1_n_10_fixpt.m[   17] = 1.239603462;
    es1_mean_0_sd_1_n_10_fixpt.m[   18] = 0.852981878;
    es1_mean_0_sd_1_n_10_fixpt.m[   19] = 0.3359644404;
    es1_mean_0_sd_1_n_10_fixpt.m[   20] = 0.3508304171;
    es1_mean_0_sd_1_n_10_fixpt.m[   21] = -1.482038342;
    es1_mean_0_sd_1_n_10_fixpt.m[   22] = -1.004628114;
    es1_mean_0_sd_1_n_10_fixpt.m[   23] = 0.2905170254;
    es1_mean_0_sd_1_n_10_fixpt.m[   24] = -0.8645693753;
    es1_mean_0_sd_1_n_10_fixpt.m[   25] = 1.686644623;
    es1_mean_0_sd_1_n_10_fixpt.m[   26] = 1.040505558;
    es1_mean_0_sd_1_n_10_fixpt.m[   27] = -1.266056936;
    es1_mean_0_sd_1_n_10_fixpt.m[   28] = 1.112074618;
    es1_mean_0_sd_1_n_10_fixpt.m[   29] = -1.457934223;
    es1_mean_0_sd_1_n_10_fixpt.m[   30] = 0.6034458382;
    es1_mean_0_sd_1_n_10_fixpt.m[   31] = -0.5905044738;
    es1_mean_0_sd_1_n_10_fixpt.m[   32] = 1.27114057;
    es1_mean_0_sd_1_n_10_fixpt.m[   33] = 1.110481834;
    es1_mean_0_sd_1_n_10_fixpt.m[   34] = 0.1867737442;
    es1_mean_0_sd_1_n_10_fixpt.m[   35] = -0.8940889582;
    es1_mean_0_sd_1_n_10_fixpt.m[   36] = 1.575149796;
    es1_mean_0_sd_1_n_10_fixpt.m[   37] = 0.4208066938;
    es1_mean_0_sd_1_n_10_fixpt.m[   38] = -0.5791426199;
    es1_mean_0_sd_1_n_10_fixpt.m[   39] = -0.984028118;
    es1_mean_0_sd_1_n_10_fixpt.m[   40] = -0.06361178006;
    es1_mean_0_sd_1_n_10_fixpt.m[   41] = 0.006152125774;
    es1_mean_0_sd_1_n_10_fixpt.m[   42] = 1.115472555;
    es1_mean_0_sd_1_n_10_fixpt.m[   43] = 0.9324086688;
    es1_mean_0_sd_1_n_10_fixpt.m[   44] = 0.3224788758;
    es1_mean_0_sd_1_n_10_fixpt.m[   45] = -0.06021384243;
    es1_mean_0_sd_1_n_10_fixpt.m[   46] = -1.301416724;
    es1_mean_0_sd_1_n_10_fixpt.m[   47] = 0.1349551964;
    es1_mean_0_sd_1_n_10_fixpt.m[   48] = 1.475653937;
    es1_mean_0_sd_1_n_10_fixpt.m[   49] = -0.2035643333;
    es1_mean_0_sd_1_n_10_fixpt.m[   50] = 0.821232399;
    es1_mean_0_sd_1_n_10_fixpt.m[   51] = -1.00186729;
    es1_mean_0_sd_1_n_10_fixpt.m[   52] = 0.01910676272;
    es1_mean_0_sd_1_n_10_fixpt.m[   53] = 0.2076922974;
    es1_mean_0_sd_1_n_10_fixpt.m[   54] = 1.030842673;
    es1_mean_0_sd_1_n_10_fixpt.m[   55] = 0.9783870114;
    es1_mean_0_sd_1_n_10_fixpt.m[   56] = 0.2299912625;
    es1_mean_0_sd_1_n_10_fixpt.m[   57] = -1.666164084;
    es1_mean_0_sd_1_n_10_fixpt.m[   58] = 0.4874912188;
    es1_mean_0_sd_1_n_10_fixpt.m[   59] = -1.42554763;
    es1_mean_0_sd_1_n_10_fixpt.m[   60] = 0.1419634426;
    es1_mean_0_sd_1_n_10_fixpt.m[   61] = -1.324034246;
    es1_mean_0_sd_1_n_10_fixpt.m[   62] = -1.418008456;
    es1_mean_0_sd_1_n_10_fixpt.m[   63] = -1.5734641;
    es1_mean_0_sd_1_n_10_fixpt.m[   64] = -1.549784723;
    es1_mean_0_sd_1_n_10_fixpt.m[   65] = -0.246250924;
    es1_mean_0_sd_1_n_10_fixpt.m[   66] = 0.2801108416;
    es1_mean_0_sd_1_n_10_fixpt.m[   67] = -0.2792746297;
    es1_mean_0_sd_1_n_10_fixpt.m[   68] = -1.158809531;
    es1_mean_0_sd_1_n_10_fixpt.m[   69] = -1.049650787;
    es1_mean_0_sd_1_n_10_fixpt.m[   70] = 0.2841458926;
    es1_mean_0_sd_1_n_10_fixpt.m[   71] = 0.3830046386;
    es1_mean_0_sd_1_n_10_fixpt.m[   72] = 0.5464241984;
    es1_mean_0_sd_1_n_10_fixpt.m[   73] = 0.4074273147;
    es1_mean_0_sd_1_n_10_fixpt.m[   74] = -0.2036705189;
    es1_mean_0_sd_1_n_10_fixpt.m[   75] = -0.5817972587;
    es1_mean_0_sd_1_n_10_fixpt.m[   76] = 0.4568035954;
    es1_mean_0_sd_1_n_10_fixpt.m[   77] = -1.319893009;
    es1_mean_0_sd_1_n_10_fixpt.m[   78] = -1.422255878;
    es1_mean_0_sd_1_n_10_fixpt.m[   79] = 0.29041084;
    es1_mean_0_sd_1_n_10_fixpt.m[   80] = -0.9242456539;
    es1_mean_0_sd_1_n_10_fixpt.m[   81] = -0.4144488333;
    es1_mean_0_sd_1_n_10_fixpt.m[   82] = 0.6879695351;
    es1_mean_0_sd_1_n_10_fixpt.m[   83] = 1.097739568;
    es1_mean_0_sd_1_n_10_fixpt.m[   84] = 0.8530880634;
    es1_mean_0_sd_1_n_10_fixpt.m[   85] = -1.23972292;
    es1_mean_0_sd_1_n_10_fixpt.m[   86] = 0.9584241284;
    es1_mean_0_sd_1_n_10_fixpt.m[   87] = 0.7931994139;
    es1_mean_0_sd_1_n_10_fixpt.m[   88] = 1.177909658;
    es1_mean_0_sd_1_n_10_fixpt.m[   89] = 0.2391232199;
    es1_mean_0_sd_1_n_10_fixpt.m[   90] = 1.02064886;
    es1_mean_0_sd_1_n_10_fixpt.m[   91] = 0.2463438371;
    es1_mean_0_sd_1_n_10_fixpt.m[   92] = -0.7155910502;
    es1_mean_0_sd_1_n_10_fixpt.m[   93] = -0.9502611135;
    es1_mean_0_sd_1_n_10_fixpt.m[   94] = 1.066945759;
    es1_mean_0_sd_1_n_10_fixpt.m[   95] = -0.4383405817;
    es1_mean_0_sd_1_n_10_fixpt.m[   96] = 1.514199291;
    es1_mean_0_sd_1_n_10_fixpt.m[   97] = -0.3041220482;
    es1_mean_0_sd_1_n_10_fixpt.m[   98] = -1.23303323;
    es1_mean_0_sd_1_n_10_fixpt.m[   99] = -1.715858921;
    es1_mean_0_sd_1_n_10_fixpt.m[  100] = -1.483100198;
    es1_mean_0_sd_1_n_10_fixpt.m[  101] = 1.484042595;
    es1_mean_0_sd_1_n_10_fixpt.m[  102] = 0.6675819098;
    es1_mean_0_sd_1_n_10_fixpt.m[  103] = -0.09270662046;
    es1_mean_0_sd_1_n_10_fixpt.m[  104] = -0.8654188595;
    es1_mean_0_sd_1_n_10_fixpt.m[  105] = 1.688980705;
    es1_mean_0_sd_1_n_10_fixpt.m[  106] = 0.9536457786;
    es1_mean_0_sd_1_n_10_fixpt.m[  107] = -0.5207405682;
    es1_mean_0_sd_1_n_10_fixpt.m[  108] = 0.1672356033;
    es1_mean_0_sd_1_n_10_fixpt.m[  109] = -0.2953086474;
    es1_mean_0_sd_1_n_10_fixpt.m[  110] = -0.9949652296;
    es1_mean_0_sd_1_n_10_fixpt.m[  111] = 0.955450933;
    es1_mean_0_sd_1_n_10_fixpt.m[  112] = -0.877417827;
    es1_mean_0_sd_1_n_10_fixpt.m[  113] = 0.9848643299;
    es1_mean_0_sd_1_n_10_fixpt.m[  114] = 0.1890036408;
    es1_mean_0_sd_1_n_10_fixpt.m[  115] = 1.338356022;
    es1_mean_0_sd_1_n_10_fixpt.m[  116] = -1.264570338;
    es1_mean_0_sd_1_n_10_fixpt.m[  117] = 0.4391767941;
    es1_mean_0_sd_1_n_10_fixpt.m[  118] = -1.744422833;
    es1_mean_0_sd_1_n_10_fixpt.m[  119] = -1.3074693;
    es1_mean_0_sd_1_n_10_fixpt.m[  120] = -0.9828600769;
    es1_mean_0_sd_1_n_10_fixpt.m[  121] = -0.238499379;
    es1_mean_0_sd_1_n_10_fixpt.m[  122] = -1.402611552;
    es1_mean_0_sd_1_n_10_fixpt.m[  123] = -0.649968381;
    es1_mean_0_sd_1_n_10_fixpt.m[  124] = -1.310230124;
    es1_mean_0_sd_1_n_10_fixpt.m[  125] = 0.08218097873;
    es1_mean_0_sd_1_n_10_fixpt.m[  126] = 0.7128169534;
    es1_mean_0_sd_1_n_10_fixpt.m[  127] = 1.36490241;
    es1_mean_0_sd_1_n_10_fixpt.m[  128] = -1.714266138;
    es1_mean_0_sd_1_n_10_fixpt.m[  129] = 0.06444799202;
    es1_mean_0_sd_1_n_10_fixpt.m[  130] = -0.8655250452;
    es1_mean_0_sd_1_n_10_fixpt.m[  131] = -0.8775240125;
    es1_mean_0_sd_1_n_10_fixpt.m[  132] = -1.068445629;
    es1_mean_0_sd_1_n_10_fixpt.m[  133] = -0.01338601531;
    es1_mean_0_sd_1_n_10_fixpt.m[  134] = 1.190439553;
    es1_mean_0_sd_1_n_10_fixpt.m[  135] = 0.08026963891;
    es1_mean_0_sd_1_n_10_fixpt.m[  136] = -0.4654178971;
    es1_mean_0_sd_1_n_10_fixpt.m[  137] = 0.1784912716;
    es1_mean_0_sd_1_n_10_fixpt.m[  138] = -0.9231837986;
    es1_mean_0_sd_1_n_10_fixpt.m[  139] = 1.119826162;
    es1_mean_0_sd_1_n_10_fixpt.m[  140] = 0.3110108364;
    es1_mean_0_sd_1_n_10_fixpt.m[  141] = 1.311915821;
    es1_mean_0_sd_1_n_10_fixpt.m[  142] = -1.003884816;
    es1_mean_0_sd_1_n_10_fixpt.m[  143] = -1.005265228;
    es1_mean_0_sd_1_n_10_fixpt.m[  144] = 1.453779714;
    es1_mean_0_sd_1_n_10_fixpt.m[  145] = -1.607974403;
    es1_mean_0_sd_1_n_10_fixpt.m[  146] = -0.3961849189;
    es1_mean_0_sd_1_n_10_fixpt.m[  147] = -0.248587006;
    es1_mean_0_sd_1_n_10_fixpt.m[  148] = 1.400580754;
    es1_mean_0_sd_1_n_10_fixpt.m[  149] = 0.3079314556;
    es1_mean_0_sd_1_n_10_fixpt.m[  150] = 1.642365249;
    es1_mean_0_sd_1_n_10_fixpt.m[  151] = 0.701879842;
    es1_mean_0_sd_1_n_10_fixpt.m[  152] = 0.8976859944;
    es1_mean_0_sd_1_n_10_fixpt.m[  153] = 0.6767138669;
    es1_mean_0_sd_1_n_10_fixpt.m[  154] = 0.1571479761;
    es1_mean_0_sd_1_n_10_fixpt.m[  155] = 0.2935964065;
    es1_mean_0_sd_1_n_10_fixpt.m[  156] = -0.07794682914;
    es1_mean_0_sd_1_n_10_fixpt.m[  157] = 1.431056007;
    es1_mean_0_sd_1_n_10_fixpt.m[  158] = -0.5834962274;
    es1_mean_0_sd_1_n_10_fixpt.m[  159] = -0.9845590456;
    es1_mean_0_sd_1_n_10_fixpt.m[  160] = 0.6177808873;
    es1_mean_0_sd_1_n_10_fixpt.m[  161] = 0.9656447456;
    es1_mean_0_sd_1_n_10_fixpt.m[  162] = -1.54532493;
    es1_mean_0_sd_1_n_10_fixpt.m[  163] = 1.451762189;
    es1_mean_0_sd_1_n_10_fixpt.m[  164] = -0.1723457819;
    es1_mean_0_sd_1_n_10_fixpt.m[  165] = -0.4203952241;
    es1_mean_0_sd_1_n_10_fixpt.m[  166] = 1.275812734;
    es1_mean_0_sd_1_n_10_fixpt.m[  167] = 0.02271707123;
    es1_mean_0_sd_1_n_10_fixpt.m[  168] = -1.705027995;
    es1_mean_0_sd_1_n_10_fixpt.m[  169] = 0.1412201438;
    es1_mean_0_sd_1_n_10_fixpt.m[  170] = -0.3626302856;
    es1_mean_0_sd_1_n_10_fixpt.m[  171] = -0.7664539281;
    es1_mean_0_sd_1_n_10_fixpt.m[  172] = -0.3208993648;
    es1_mean_0_sd_1_n_10_fixpt.m[  173] = 1.039125145;
    es1_mean_0_sd_1_n_10_fixpt.m[  174] = -0.1503653734;
    es1_mean_0_sd_1_n_10_fixpt.m[  175] = -1.65958058;
    es1_mean_0_sd_1_n_10_fixpt.m[  176] = -1.377976505;
    es1_mean_0_sd_1_n_10_fixpt.m[  177] = 1.101243692;
    es1_mean_0_sd_1_n_10_fixpt.m[  178] = -0.2445519553;
    es1_mean_0_sd_1_n_10_fixpt.m[  179] = 1.696201322;
    es1_mean_0_sd_1_n_10_fixpt.m[  180] = 0.5991984163;
    es1_mean_0_sd_1_n_10_fixpt.m[  181] = -0.3719746138;
    es1_mean_0_sd_1_n_10_fixpt.m[  182] = 1.245231296;
    es1_mean_0_sd_1_n_10_fixpt.m[  183] = -0.9626848227;
    es1_mean_0_sd_1_n_10_fixpt.m[  184] = -0.2744962799;
    es1_mean_0_sd_1_n_10_fixpt.m[  185] = 0.7804571481;
    es1_mean_0_sd_1_n_10_fixpt.m[  186] = -0.7350230056;
    es1_mean_0_sd_1_n_10_fixpt.m[  187] = -1.104973458;
    es1_mean_0_sd_1_n_10_fixpt.m[  188] = -1.000380693;
    es1_mean_0_sd_1_n_10_fixpt.m[  189] = -1.486816692;
    es1_mean_0_sd_1_n_10_fixpt.m[  190] = 1.35821272;
    es1_mean_0_sd_1_n_10_fixpt.m[  191] = 1.719031215;
    es1_mean_0_sd_1_n_10_fixpt.m[  192] = -0.8400405133;
    es1_mean_0_sd_1_n_10_fixpt.m[  193] = 0.004771713633;
    es1_mean_0_sd_1_n_10_fixpt.m[  194] = 1.301828194;
    es1_mean_0_sd_1_n_10_fixpt.m[  195] = -0.622678695;
    es1_mean_0_sd_1_n_10_fixpt.m[  196] = -1.118140466;
    es1_mean_0_sd_1_n_10_fixpt.m[  197] = 1.144036468;
    es1_mean_0_sd_1_n_10_fixpt.m[  198] = -0.8489600995;
    es1_mean_0_sd_1_n_10_fixpt.m[  199] = -1.035634295;
    es1_mean_0_sd_1_n_10_fixpt.m[  200] = -1.402823923;
    es1_mean_0_sd_1_n_10_fixpt.m[  201] = -0.1379416641;
    es1_mean_0_sd_1_n_10_fixpt.m[  202] = 1.691422972;
    es1_mean_0_sd_1_n_10_fixpt.m[  203] = 1.001216904;
    es1_mean_0_sd_1_n_10_fixpt.m[  204] = -1.523450706;
    es1_mean_0_sd_1_n_10_fixpt.m[  205] = -0.8580920566;
    es1_mean_0_sd_1_n_10_fixpt.m[  206] = 1.668486894;
    es1_mean_0_sd_1_n_10_fixpt.m[  207] = -0.4458797562;
    es1_mean_0_sd_1_n_10_fixpt.m[  208] = 0.2509098158;
    es1_mean_0_sd_1_n_10_fixpt.m[  209] = -1.491595042;
    es1_mean_0_sd_1_n_10_fixpt.m[  210] = -1.468658963;
    es1_mean_0_sd_1_n_10_fixpt.m[  211] = 0.4626438005;
    es1_mean_0_sd_1_n_10_fixpt.m[  212] = -0.06594786211;
    es1_mean_0_sd_1_n_10_fixpt.m[  213] = -1.100301294;
    es1_mean_0_sd_1_n_10_fixpt.m[  214] = -0.08750352846;
    es1_mean_0_sd_1_n_10_fixpt.m[  215] = -0.05819631694;
    es1_mean_0_sd_1_n_10_fixpt.m[  216] = -1.481188858;
    es1_mean_0_sd_1_n_10_fixpt.m[  217] = -1.153075512;
    es1_mean_0_sd_1_n_10_fixpt.m[  218] = 0.4683778202;
    es1_mean_0_sd_1_n_10_fixpt.m[  219] = -0.2203416501;
    es1_mean_0_sd_1_n_10_fixpt.m[  220] = 0.3134531041;
    es1_mean_0_sd_1_n_10_fixpt.m[  221] = -0.09748497;
    es1_mean_0_sd_1_n_10_fixpt.m[  222] = -0.9160693667;
    es1_mean_0_sd_1_n_10_fixpt.m[  223] = 1.392829209;
    es1_mean_0_sd_1_n_10_fixpt.m[  224] = 1.633339477;
    es1_mean_0_sd_1_n_10_fixpt.m[  225] = -0.7547735176;
    es1_mean_0_sd_1_n_10_fixpt.m[  226] = -1.1237683;
    es1_mean_0_sd_1_n_10_fixpt.m[  227] = -0.708370433;
    es1_mean_0_sd_1_n_10_fixpt.m[  228] = -1.336033213;
    es1_mean_0_sd_1_n_10_fixpt.m[  229] = 1.319985922;
    es1_mean_0_sd_1_n_10_fixpt.m[  230] = -1.194063134;
    es1_mean_0_sd_1_n_10_fixpt.m[  231] = -0.2773632898;
    es1_mean_0_sd_1_n_10_fixpt.m[  232] = -0.1832828936;
    es1_mean_0_sd_1_n_10_fixpt.m[  233] = -1.395390935;
    es1_mean_0_sd_1_n_10_fixpt.m[  234] = 1.359593132;
    es1_mean_0_sd_1_n_10_fixpt.m[  235] = 1.533949803;
    es1_mean_0_sd_1_n_10_fixpt.m[  236] = -1.678693979;
    es1_mean_0_sd_1_n_10_fixpt.m[  237] = -1.405478562;
    es1_mean_0_sd_1_n_10_fixpt.m[  238] = -0.1202086776;
    es1_mean_0_sd_1_n_10_fixpt.m[  239] = -0.173513823;
    es1_mean_0_sd_1_n_10_fixpt.m[  240] = 1.720411627;
    es1_mean_0_sd_1_n_10_fixpt.m[  241] = -1.614557907;
    es1_mean_0_sd_1_n_10_fixpt.m[  242] = 1.32147252;
    es1_mean_0_sd_1_n_10_fixpt.m[  243] = 1.627817828;
    es1_mean_0_sd_1_n_10_fixpt.m[  244] = 0.9417529972;
    es1_mean_0_sd_1_n_10_fixpt.m[  245] = 1.341860146;
    es1_mean_0_sd_1_n_10_fixpt.m[  246] = -0.7035920832;
    es1_mean_0_sd_1_n_10_fixpt.m[  247] = -0.6715240474;
    es1_mean_0_sd_1_n_10_fixpt.m[  248] = -0.0302695178;
    es1_mean_0_sd_1_n_10_fixpt.m[  249] = 1.587998248;
    es1_mean_0_sd_1_n_10_fixpt.m[  250] = -1.58036616;
    es1_mean_0_sd_1_n_10_fixpt.m[  251] = -1.017051824;
    es1_mean_0_sd_1_n_10_fixpt.m[  252] = -0.7702766077;
    es1_mean_0_sd_1_n_10_fixpt.m[  253] = -0.5060869623;
    es1_mean_0_sd_1_n_10_fixpt.m[  254] = 1.340585919;
    es1_mean_0_sd_1_n_10_fixpt.m[  255] = 0.5014015259;
    es1_mean_0_sd_1_n_10_fixpt.m[  256] = 1.514624034;
    es1_mean_0_sd_1_n_10_fixpt.m[  257] = 1.729012656;
    es1_mean_0_sd_1_n_10_fixpt.m[  258] = 0.3191871236;
    es1_mean_0_sd_1_n_10_fixpt.m[  259] = -1.002929146;
    es1_mean_0_sd_1_n_10_fixpt.m[  260] = -0.3223859626;
    es1_mean_0_sd_1_n_10_fixpt.m[  261] = -0.5336952051;
    es1_mean_0_sd_1_n_10_fixpt.m[  262] = -0.4449240863;
    es1_mean_0_sd_1_n_10_fixpt.m[  263] = -1.734653763;
    es1_mean_0_sd_1_n_10_fixpt.m[  264] = 1.003022059;
    es1_mean_0_sd_1_n_10_fixpt.m[  265] = 0.09025108046;
    es1_mean_0_sd_1_n_10_fixpt.m[  266] = -1.214769316;
    es1_mean_0_sd_1_n_10_fixpt.m[  267] = 1.271034384;
    es1_mean_0_sd_1_n_10_fixpt.m[  268] = -1.234095085;
    es1_mean_0_sd_1_n_10_fixpt.m[  269] = 1.609766285;
    es1_mean_0_sd_1_n_10_fixpt.m[  270] = -0.8466240175;
    es1_mean_0_sd_1_n_10_fixpt.m[  271] = -0.06329322327;
    es1_mean_0_sd_1_n_10_fixpt.m[  272] = 1.563150829;
    es1_mean_0_sd_1_n_10_fixpt.m[  273] = -0.9555703909;
    es1_mean_0_sd_1_n_10_fixpt.m[  274] = 0.1415387006;
    es1_mean_0_sd_1_n_10_fixpt.m[  275] = -1.301204352;
    es1_mean_0_sd_1_n_10_fixpt.m[  276] = -0.3864158485;
    es1_mean_0_sd_1_n_10_fixpt.m[  277] = -1.026502338;
    es1_mean_0_sd_1_n_10_fixpt.m[  278] = -0.146967436;
    es1_mean_0_sd_1_n_10_fixpt.m[  279] = 0.1780665293;
    es1_mean_0_sd_1_n_10_fixpt.m[  280] = -0.5150065485;
    es1_mean_0_sd_1_n_10_fixpt.m[  281] = -0.7035920832;
    es1_mean_0_sd_1_n_10_fixpt.m[  282] = -1.246518795;
    es1_mean_0_sd_1_n_10_fixpt.m[  283] = 1.347912722;
    es1_mean_0_sd_1_n_10_fixpt.m[  284] = -0.5130952087;
    es1_mean_0_sd_1_n_10_fixpt.m[  285] = 0.8592468253;
    es1_mean_0_sd_1_n_10_fixpt.m[  286] = -1.718088817;
    es1_mean_0_sd_1_n_10_fixpt.m[  287] = 1.61751783;
    es1_mean_0_sd_1_n_10_fixpt.m[  288] = -1.086603358;
    es1_mean_0_sd_1_n_10_fixpt.m[  289] = 1.038381847;
    es1_mean_0_sd_1_n_10_fixpt.m[  290] = 1.397713744;
    es1_mean_0_sd_1_n_10_fixpt.m[  291] = 1.623888963;
    es1_mean_0_sd_1_n_10_fixpt.m[  292] = 0.3605994878;
    es1_mean_0_sd_1_n_10_fixpt.m[  293] = 1.139258118;
    es1_mean_0_sd_1_n_10_fixpt.m[  294] = -0.4831508838;
    es1_mean_0_sd_1_n_10_fixpt.m[  295] = 1.106977711;
    es1_mean_0_sd_1_n_10_fixpt.m[  296] = 0.87942208;
    es1_mean_0_sd_1_n_10_fixpt.m[  297] = -1.419070312;
    es1_mean_0_sd_1_n_10_fixpt.m[  298] = 1.61465082;
    es1_mean_0_sd_1_n_10_fixpt.m[  299] = -0.9793559539;
    es1_mean_0_sd_1_n_10_fixpt.m[  300] = 0.7761035406;
    es1_mean_0_sd_1_n_10_fixpt.m[  301] = -0.7990528916;
    es1_mean_0_sd_1_n_10_fixpt.m[  302] = -0.5169178883;
    es1_mean_0_sd_1_n_10_fixpt.m[  303] = 0.7721746753;
    es1_mean_0_sd_1_n_10_fixpt.m[  304] = 1.46556631;
    es1_mean_0_sd_1_n_10_fixpt.m[  305] = -0.2238457731;
    es1_mean_0_sd_1_n_10_fixpt.m[  306] = 1.468858062;
    es1_mean_0_sd_1_n_10_fixpt.m[  307] = 0.9497169133;
    es1_mean_0_sd_1_n_10_fixpt.m[  308] = 0.3133469184;
    es1_mean_0_sd_1_n_10_fixpt.m[  309] = 0.4500077202;
    es1_mean_0_sd_1_n_10_fixpt.m[  310] = 0.8426818796;
    es1_mean_0_sd_1_n_10_fixpt.m[  311] = -1.378719803;
    es1_mean_0_sd_1_n_10_fixpt.m[  312] = -0.8957879269;
    es1_mean_0_sd_1_n_10_fixpt.m[  313] = 0.6413540791;
    es1_mean_0_sd_1_n_10_fixpt.m[  314] = 0.6892437616;
    es1_mean_0_sd_1_n_10_fixpt.m[  315] = -0.3520117307;
    es1_mean_0_sd_1_n_10_fixpt.m[  316] = -0.7218559976;
    es1_mean_0_sd_1_n_10_fixpt.m[  317] = -0.149303518;
    es1_mean_0_sd_1_n_10_fixpt.m[  318] = -0.2577189633;
    es1_mean_0_sd_1_n_10_fixpt.m[  319] = 0.4643427692;
    es1_mean_0_sd_1_n_10_fixpt.m[  320] = 0.5720149158;
    es1_mean_0_sd_1_n_10_fixpt.m[  321] = -1.307150743;
    es1_mean_0_sd_1_n_10_fixpt.m[  322] = -1.577499151;
    es1_mean_0_sd_1_n_10_fixpt.m[  323] = 1.712553896;
    es1_mean_0_sd_1_n_10_fixpt.m[  324] = 0.5643695563;
    es1_mean_0_sd_1_n_10_fixpt.m[  325] = 0.6959334512;
    es1_mean_0_sd_1_n_10_fixpt.m[  326] = -0.9070435951;
    es1_mean_0_sd_1_n_10_fixpt.m[  327] = 0.9530086655;
    es1_mean_0_sd_1_n_10_fixpt.m[  328] = 1.322322004;
    es1_mean_0_sd_1_n_10_fixpt.m[  329] = -0.2447643264;
    es1_mean_0_sd_1_n_10_fixpt.m[  330] = 0.6402922238;
    es1_mean_0_sd_1_n_10_fixpt.m[  331] = -1.081187895;
    es1_mean_0_sd_1_n_10_fixpt.m[  332] = -0.2275622673;
    es1_mean_0_sd_1_n_10_fixpt.m[  333] = -0.9822229636;
    es1_mean_0_sd_1_n_10_fixpt.m[  334] = -0.3330045175;
    es1_mean_0_sd_1_n_10_fixpt.m[  335] = -0.1499406311;
    es1_mean_0_sd_1_n_10_fixpt.m[  336] = -0.6919116727;
    es1_mean_0_sd_1_n_10_fixpt.m[  337] = 0.849690126;
    es1_mean_0_sd_1_n_10_fixpt.m[  338] = -1.593533169;
    es1_mean_0_sd_1_n_10_fixpt.m[  339] = -1.37426001;
    es1_mean_0_sd_1_n_10_fixpt.m[  340] = -1.61997337;
    es1_mean_0_sd_1_n_10_fixpt.m[  341] = -0.2521973148;
    es1_mean_0_sd_1_n_10_fixpt.m[  342] = 0.3291685653;
    es1_mean_0_sd_1_n_10_fixpt.m[  343] = 1.335807569;
    es1_mean_0_sd_1_n_10_fixpt.m[  344] = 0.5409025501;
    es1_mean_0_sd_1_n_10_fixpt.m[  345] = 1.352266329;
    es1_mean_0_sd_1_n_10_fixpt.m[  346] = 0.5104272976;
    es1_mean_0_sd_1_n_10_fixpt.m[  347] = -1.056446662;
    es1_mean_0_sd_1_n_10_fixpt.m[  348] = 1.689724003;
    es1_mean_0_sd_1_n_10_fixpt.m[  349] = -1.482038342;
    es1_mean_0_sd_1_n_10_fixpt.m[  350] = 0.4423623607;
    es1_mean_0_sd_1_n_10_fixpt.m[  351] = -0.1677798035;
    es1_mean_0_sd_1_n_10_fixpt.m[  352] = -1.011211619;
    es1_mean_0_sd_1_n_10_fixpt.m[  353] = 0.6703427341;
    es1_mean_0_sd_1_n_10_fixpt.m[  354] = -1.313734248;
    es1_mean_0_sd_1_n_10_fixpt.m[  355] = -0.8687106115;
    es1_mean_0_sd_1_n_10_fixpt.m[  356] = 1.553700316;
    es1_mean_0_sd_1_n_10_fixpt.m[  357] = -1.309062083;
    es1_mean_0_sd_1_n_10_fixpt.m[  358] = 0.9688303121;
    es1_mean_0_sd_1_n_10_fixpt.m[  359] = 1.056221019;
    es1_mean_0_sd_1_n_10_fixpt.m[  360] = 0.4025427795;
    es1_mean_0_sd_1_n_10_fixpt.m[  361] = -0.1676736178;
    es1_mean_0_sd_1_n_10_fixpt.m[  362] = 1.116215854;
    es1_mean_0_sd_1_n_10_fixpt.m[  363] = -0.008820036892;
    es1_mean_0_sd_1_n_10_fixpt.m[  364] = -0.4523570747;
    es1_mean_0_sd_1_n_10_fixpt.m[  365] = 0.9895364942;
    es1_mean_0_sd_1_n_10_fixpt.m[  366] = 0.7865097243;
    es1_mean_0_sd_1_n_10_fixpt.m[  367] = -1.72445995;
    es1_mean_0_sd_1_n_10_fixpt.m[  368] = -0.3959725478;
    es1_mean_0_sd_1_n_10_fixpt.m[  369] = 0.03354799724;
    es1_mean_0_sd_1_n_10_fixpt.m[  370] = -1.481082672;
    es1_mean_0_sd_1_n_10_fixpt.m[  371] = 1.218153981;
    es1_mean_0_sd_1_n_10_fixpt.m[  372] = 1.004402471;
    es1_mean_0_sd_1_n_10_fixpt.m[  373] = 0.5203025534;
    es1_mean_0_sd_1_n_10_fixpt.m[  374] = -1.339962078;
    es1_mean_0_sd_1_n_10_fixpt.m[  375] = 1.190333367;
    es1_mean_0_sd_1_n_10_fixpt.m[  376] = 1.70267864;
    es1_mean_0_sd_1_n_10_fixpt.m[  377] = 1.617093088;
    es1_mean_0_sd_1_n_10_fixpt.m[  378] = -1.476304323;
    es1_mean_0_sd_1_n_10_fixpt.m[  379] = -0.8157240227;
    es1_mean_0_sd_1_n_10_fixpt.m[  380] = 0.7827932301;
    es1_mean_0_sd_1_n_10_fixpt.m[  381] = 1.629092055;
    es1_mean_0_sd_1_n_10_fixpt.m[  382] = 0.865299402;
    es1_mean_0_sd_1_n_10_fixpt.m[  383] = -0.8590477267;
    es1_mean_0_sd_1_n_10_fixpt.m[  384] = 0.2535644544;
    es1_mean_0_sd_1_n_10_fixpt.m[  385] = 0.009443877731;
    es1_mean_0_sd_1_n_10_fixpt.m[  386] = -0.4127498646;
    es1_mean_0_sd_1_n_10_fixpt.m[  387] = -0.9235023551;
    es1_mean_0_sd_1_n_10_fixpt.m[  388] = -0.9519600822;
    es1_mean_0_sd_1_n_10_fixpt.m[  389] = -1.602771311;
    es1_mean_0_sd_1_n_10_fixpt.m[  390] = -0.3255715289;
    es1_mean_0_sd_1_n_10_fixpt.m[  391] = 1.298536441;
    es1_mean_0_sd_1_n_10_fixpt.m[  392] = -0.6557024007;
    es1_mean_0_sd_1_n_10_fixpt.m[  393] = -0.5108653121;
    es1_mean_0_sd_1_n_10_fixpt.m[  394] = -1.598417704;
    es1_mean_0_sd_1_n_10_fixpt.m[  395] = -0.3675148208;
    es1_mean_0_sd_1_n_10_fixpt.m[  396] = -1.650448623;
    es1_mean_0_sd_1_n_10_fixpt.m[  397] = 0.805198381;
    es1_mean_0_sd_1_n_10_fixpt.m[  398] = -0.7525436212;
    es1_mean_0_sd_1_n_10_fixpt.m[  399] = 0.7419117938;
    es1_mean_0_sd_1_n_10_fixpt.m[  400] = -0.4183776986;
    es1_mean_0_sd_1_n_10_fixpt.m[  401] = -0.4456673851;
    es1_mean_0_sd_1_n_10_fixpt.m[  402] = -0.523819949;
    es1_mean_0_sd_1_n_10_fixpt.m[  403] = -0.8100961887;
    es1_mean_0_sd_1_n_10_fixpt.m[  404] = -0.6064323059;
    es1_mean_0_sd_1_n_10_fixpt.m[  405] = -1.29886827;
    es1_mean_0_sd_1_n_10_fixpt.m[  406] = -1.533963076;
    es1_mean_0_sd_1_n_10_fixpt.m[  407] = 1.600528142;
    es1_mean_0_sd_1_n_10_fixpt.m[  408] = 0.171058283;
    es1_mean_0_sd_1_n_10_fixpt.m[  409] = -0.877417827;
    es1_mean_0_sd_1_n_10_fixpt.m[  410] = -0.9412353418;
    es1_mean_0_sd_1_n_10_fixpt.m[  411] = -1.310654867;
    es1_mean_0_sd_1_n_10_fixpt.m[  412] = -1.008875536;
    es1_mean_0_sd_1_n_10_fixpt.m[  413] = -0.7266343473;
    es1_mean_0_sd_1_n_10_fixpt.m[  414] = 0.2984809417;
    es1_mean_0_sd_1_n_10_fixpt.m[  415] = 1.398669414;
    es1_mean_0_sd_1_n_10_fixpt.m[  416] = -0.3083694701;
    es1_mean_0_sd_1_n_10_fixpt.m[  417] = 1.165485949;
    es1_mean_0_sd_1_n_10_fixpt.m[  418] = -0.9330590547;
    es1_mean_0_sd_1_n_10_fixpt.m[  419] = 1.633870405;
    es1_mean_0_sd_1_n_10_fixpt.m[  420] = 0.6189489283;
    es1_mean_0_sd_1_n_10_fixpt.m[  421] = -1.152544584;
    es1_mean_0_sd_1_n_10_fixpt.m[  422] = -1.017582751;
    es1_mean_0_sd_1_n_10_fixpt.m[  423] = 1.670504419;
    es1_mean_0_sd_1_n_10_fixpt.m[  424] = -0.954614721;
    es1_mean_0_sd_1_n_10_fixpt.m[  425] = 0.3811994842;
    es1_mean_0_sd_1_n_10_fixpt.m[  426] = -1.162101283;
    es1_mean_0_sd_1_n_10_fixpt.m[  427] = 0.5653252262;
    es1_mean_0_sd_1_n_10_fixpt.m[  428] = -0.6816116746;
    es1_mean_0_sd_1_n_10_fixpt.m[  429] = 0.3514675305;
    es1_mean_0_sd_1_n_10_fixpt.m[  430] = 0.6979509767;
    es1_mean_0_sd_1_n_10_fixpt.m[  431] = 1.612951852;
    es1_mean_0_sd_1_n_10_fixpt.m[  432] = -0.3778148189;
    es1_mean_0_sd_1_n_10_fixpt.m[  433] = -0.8625518498;
    es1_mean_0_sd_1_n_10_fixpt.m[  434] = -0.5082106732;
    es1_mean_0_sd_1_n_10_fixpt.m[  435] = -1.229741478;
    es1_mean_0_sd_1_n_10_fixpt.m[  436] = 0.08579128725;
    es1_mean_0_sd_1_n_10_fixpt.m[  437] = -0.09886538214;
    es1_mean_0_sd_1_n_10_fixpt.m[  438] = 1.18215708;
    es1_mean_0_sd_1_n_10_fixpt.m[  439] = -0.8679673127;
    es1_mean_0_sd_1_n_10_fixpt.m[  440] = 0.1604397281;
    es1_mean_0_sd_1_n_10_fixpt.m[  441] = -0.5068302611;
    es1_mean_0_sd_1_n_10_fixpt.m[  442] = 0.03025624529;
    es1_mean_0_sd_1_n_10_fixpt.m[  443] = 1.105384928;
    es1_mean_0_sd_1_n_10_fixpt.m[  444] = 0.162138697;
    es1_mean_0_sd_1_n_10_fixpt.m[  445] = 1.655532257;
    es1_mean_0_sd_1_n_10_fixpt.m[  446] = 0.3126036196;
    es1_mean_0_sd_1_n_10_fixpt.m[  447] = -0.716334349;
    es1_mean_0_sd_1_n_10_fixpt.m[  448] = -0.7388456853;
    es1_mean_0_sd_1_n_10_fixpt.m[  449] = -0.8656312306;
    es1_mean_0_sd_1_n_10_fixpt.m[  450] = -0.9098044194;
    es1_mean_0_sd_1_n_10_fixpt.m[  451] = -1.700674387;
    es1_mean_0_sd_1_n_10_fixpt.m[  452] = 1.333259116;
    es1_mean_0_sd_1_n_10_fixpt.m[  453] = -1.687188823;
    es1_mean_0_sd_1_n_10_fixpt.m[  454] = 1.469282804;
    es1_mean_0_sd_1_n_10_fixpt.m[  455] = -1.207867255;
    es1_mean_0_sd_1_n_10_fixpt.m[  456] = 0.07750881463;
    es1_mean_0_sd_1_n_10_fixpt.m[  457] = 1.663496173;
    es1_mean_0_sd_1_n_10_fixpt.m[  458] = -1.128228093;
    es1_mean_0_sd_1_n_10_fixpt.m[  459] = 0.401693295;
    es1_mean_0_sd_1_n_10_fixpt.m[  460] = 0.04947582958;
    es1_mean_0_sd_1_n_10_fixpt.m[  461] = 0.7540169465;
    es1_mean_0_sd_1_n_10_fixpt.m[  462] = -0.848110615;
    es1_mean_0_sd_1_n_10_fixpt.m[  463] = -1.15955283;
    es1_mean_0_sd_1_n_10_fixpt.m[  464] = -0.2190674236;
    es1_mean_0_sd_1_n_10_fixpt.m[  465] = -0.5126704664;
    es1_mean_0_sd_1_n_10_fixpt.m[  466] = 0.8024375567;
    es1_mean_0_sd_1_n_10_fixpt.m[  467] = 1.077882871;
    es1_mean_0_sd_1_n_10_fixpt.m[  468] = 0.5948448088;
    es1_mean_0_sd_1_n_10_fixpt.m[  469] = -1.468340407;
    es1_mean_0_sd_1_n_10_fixpt.m[  470] = 0.08791499841;
    es1_mean_0_sd_1_n_10_fixpt.m[  471] = 0.897579809;
    es1_mean_0_sd_1_n_10_fixpt.m[  472] = -1.40027547;
    es1_mean_0_sd_1_n_10_fixpt.m[  473] = -1.106672427;
    es1_mean_0_sd_1_n_10_fixpt.m[  474] = -0.1036437319;
    es1_mean_0_sd_1_n_10_fixpt.m[  475] = 1.489245687;
    es1_mean_0_sd_1_n_10_fixpt.m[  476] = -0.88187762;
    es1_mean_0_sd_1_n_10_fixpt.m[  477] = 0.8218695121;
    es1_mean_0_sd_1_n_10_fixpt.m[  478] = 1.282290052;
    es1_mean_0_sd_1_n_10_fixpt.m[  479] = -0.4991849016;
    es1_mean_0_sd_1_n_10_fixpt.m[  480] = 0.5938891389;
    es1_mean_0_sd_1_n_10_fixpt.m[  481] = 0.3286376374;
    es1_mean_0_sd_1_n_10_fixpt.m[  482] = -1.313734248;
    es1_mean_0_sd_1_n_10_fixpt.m[  483] = -0.18551279;
    es1_mean_0_sd_1_n_10_fixpt.m[  484] = 1.151363271;
    es1_mean_0_sd_1_n_10_fixpt.m[  485] = 1.262433355;
    es1_mean_0_sd_1_n_10_fixpt.m[  486] = 1.55646114;
    es1_mean_0_sd_1_n_10_fixpt.m[  487] = -0.1695849576;
    es1_mean_0_sd_1_n_10_fixpt.m[  488] = -0.7932126864;
    es1_mean_0_sd_1_n_10_fixpt.m[  489] = -0.01020044903;
    es1_mean_0_sd_1_n_10_fixpt.m[  490] = -1.027033265;
    es1_mean_0_sd_1_n_10_fixpt.m[  491] = -1.397727017;
    es1_mean_0_sd_1_n_10_fixpt.m[  492] = -0.4486405805;
    es1_mean_0_sd_1_n_10_fixpt.m[  493] = -1.102425005;
    es1_mean_0_sd_1_n_10_fixpt.m[  494] = 1.34462097;
    es1_mean_0_sd_1_n_10_fixpt.m[  495] = 0.9235952683;
    es1_mean_0_sd_1_n_10_fixpt.m[  496] = -0.2130148471;
    es1_mean_0_sd_1_n_10_fixpt.m[  497] = -1.192788907;
    es1_mean_0_sd_1_n_10_fixpt.m[  498] = -0.7705951645;
    es1_mean_0_sd_1_n_10_fixpt.m[  499] = -1.358332178;
    es1_mean_0_sd_1_n_10_fixpt.m[  500] = -0.1521705277;
    es1_mean_0_sd_1_n_10_fixpt.m[  501] = -1.318937339;
    es1_mean_0_sd_1_n_10_fixpt.m[  502] = 1.18502409;
    es1_mean_0_sd_1_n_10_fixpt.m[  503] = 0.2005778656;
    es1_mean_0_sd_1_n_10_fixpt.m[  504] = -0.9488807013;
    es1_mean_0_sd_1_n_10_fixpt.m[  505] = 1.425428173;
    es1_mean_0_sd_1_n_10_fixpt.m[  506] = 1.138408634;
    es1_mean_0_sd_1_n_10_fixpt.m[  507] = 0.2258500261;
    es1_mean_0_sd_1_n_10_fixpt.m[  508] = -0.9460136916;
    es1_mean_0_sd_1_n_10_fixpt.m[  509] = -1.504018751;
    es1_mean_0_sd_1_n_10_fixpt.m[  510] = -1.093399233;
    es1_mean_0_sd_1_n_10_fixpt.m[  511] = -1.574525955;
    es1_mean_0_sd_1_n_10_fixpt.m[  512] = 1.516004446;
    es1_mean_0_sd_1_n_10_fixpt.m[  513] = 1.701404414;
    es1_mean_0_sd_1_n_10_fixpt.m[  514] = 0.9072426939;
    es1_mean_0_sd_1_n_10_fixpt.m[  515] = 1.372229212;
    es1_mean_0_sd_1_n_10_fixpt.m[  516] = 1.446559097;
    es1_mean_0_sd_1_n_10_fixpt.m[  517] = 0.9658571167;
    es1_mean_0_sd_1_n_10_fixpt.m[  518] = -0.5717096315;
    es1_mean_0_sd_1_n_10_fixpt.m[  519] = 1.622827108;
    es1_mean_0_sd_1_n_10_fixpt.m[  520] = -0.1682045455;
    es1_mean_0_sd_1_n_10_fixpt.m[  521] = -0.04842724651;
    es1_mean_0_sd_1_n_10_fixpt.m[  522] = 0.1549180797;
    es1_mean_0_sd_1_n_10_fixpt.m[  523] = -0.0444983812;
    es1_mean_0_sd_1_n_10_fixpt.m[  524] = 1.725720905;
    es1_mean_0_sd_1_n_10_fixpt.m[  525] = 1.34462097;
    es1_mean_0_sd_1_n_10_fixpt.m[  526] = -1.102212634;
    es1_mean_0_sd_1_n_10_fixpt.m[  527] = -0.9272188493;
    es1_mean_0_sd_1_n_10_fixpt.m[  528] = -0.9569508031;
    es1_mean_0_sd_1_n_10_fixpt.m[  529] = -0.2415787599;
    es1_mean_0_sd_1_n_10_fixpt.m[  530] = 1.576424023;
    es1_mean_0_sd_1_n_10_fixpt.m[  531] = -0.2432777286;
    es1_mean_0_sd_1_n_10_fixpt.m[  532] = 1.664664214;
    es1_mean_0_sd_1_n_10_fixpt.m[  533] = 0.1974984847;
    es1_mean_0_sd_1_n_10_fixpt.m[  534] = -1.159446645;
    es1_mean_0_sd_1_n_10_fixpt.m[  535] = 0.8918457893;
    es1_mean_0_sd_1_n_10_fixpt.m[  536] = 1.270503456;
    es1_mean_0_sd_1_n_10_fixpt.m[  537] = 1.731667295;
    es1_mean_0_sd_1_n_10_fixpt.m[  538] = -0.1775488739;
    es1_mean_0_sd_1_n_10_fixpt.m[  539] = -0.4515075902;
    es1_mean_0_sd_1_n_10_fixpt.m[  540] = 1.098695238;
    es1_mean_0_sd_1_n_10_fixpt.m[  541] = -0.8801786513;
    es1_mean_0_sd_1_n_10_fixpt.m[  542] = 1.606368348;
    es1_mean_0_sd_1_n_10_fixpt.m[  543] = -0.4995034584;
    es1_mean_0_sd_1_n_10_fixpt.m[  544] = -0.4724261435;
    es1_mean_0_sd_1_n_10_fixpt.m[  545] = 1.18406842;
    es1_mean_0_sd_1_n_10_fixpt.m[  546] = -1.089576554;
    es1_mean_0_sd_1_n_10_fixpt.m[  547] = 0.01379748527;
    es1_mean_0_sd_1_n_10_fixpt.m[  548] = 1.526729186;
    es1_mean_0_sd_1_n_10_fixpt.m[  549] = 0.369943816;
    es1_mean_0_sd_1_n_10_fixpt.m[  550] = 1.031904528;
    es1_mean_0_sd_1_n_10_fixpt.m[  551] = 1.115472555;
    es1_mean_0_sd_1_n_10_fixpt.m[  552] = 1.54594877;
    es1_mean_0_sd_1_n_10_fixpt.m[  553] = 0.1599088004;
    es1_mean_0_sd_1_n_10_fixpt.m[  554] = 0.4951365783;
    es1_mean_0_sd_1_n_10_fixpt.m[  555] = 0.6600427357;
    es1_mean_0_sd_1_n_10_fixpt.m[  556] = 1.449426106;
    es1_mean_0_sd_1_n_10_fixpt.m[  557] = -0.02188085928;
    es1_mean_0_sd_1_n_10_fixpt.m[  558] = -0.3657096664;
    es1_mean_0_sd_1_n_10_fixpt.m[  559] = -1.475030096;
    es1_mean_0_sd_1_n_10_fixpt.m[  560] = 0.1052232427;
    es1_mean_0_sd_1_n_10_fixpt.m[  561] = -0.9777631706;
    es1_mean_0_sd_1_n_10_fixpt.m[  562] = 1.272520982;
    es1_mean_0_sd_1_n_10_fixpt.m[  563] = 0.6488932532;
    es1_mean_0_sd_1_n_10_fixpt.m[  564] = 0.8407705398;
    es1_mean_0_sd_1_n_10_fixpt.m[  565] = -1.311929093;
    es1_mean_0_sd_1_n_10_fixpt.m[  566] = 0.1434500404;
    es1_mean_0_sd_1_n_10_fixpt.m[  567] = -0.02825199231;
    es1_mean_0_sd_1_n_10_fixpt.m[  568] = 1.208597281;
    es1_mean_0_sd_1_n_10_fixpt.m[  569] = -1.087559028;
    es1_mean_0_sd_1_n_10_fixpt.m[  570] = -0.4829385127;
    es1_mean_0_sd_1_n_10_fixpt.m[  571] = 0.05935108569;
    es1_mean_0_sd_1_n_10_fixpt.m[  572] = 0.8358860046;
    es1_mean_0_sd_1_n_10_fixpt.m[  573] = -0.5847704541;
    es1_mean_0_sd_1_n_10_fixpt.m[  574] = -0.7908766044;
    es1_mean_0_sd_1_n_10_fixpt.m[  575] = -0.6812931178;
    es1_mean_0_sd_1_n_10_fixpt.m[  576] = -1.23876725;
    es1_mean_0_sd_1_n_10_fixpt.m[  577] = 1.166123062;
    es1_mean_0_sd_1_n_10_fixpt.m[  578] = 0.3149397017;
    es1_mean_0_sd_1_n_10_fixpt.m[  579] = 1.587785877;
    es1_mean_0_sd_1_n_10_fixpt.m[  580] = -1.366508465;
    es1_mean_0_sd_1_n_10_fixpt.m[  581] = 1.660416792;
    es1_mean_0_sd_1_n_10_fixpt.m[  582] = 0.6801118045;
    es1_mean_0_sd_1_n_10_fixpt.m[  583] = -1.157429119;
    es1_mean_0_sd_1_n_10_fixpt.m[  584] = 0.1363356085;
    es1_mean_0_sd_1_n_10_fixpt.m[  585] = 0.2045067309;
    es1_mean_0_sd_1_n_10_fixpt.m[  586] = -1.384878565;
    es1_mean_0_sd_1_n_10_fixpt.m[  587] = -1.237068281;
    es1_mean_0_sd_1_n_10_fixpt.m[  588] = -1.507841431;
    es1_mean_0_sd_1_n_10_fixpt.m[  589] = -0.161727227;
    es1_mean_0_sd_1_n_10_fixpt.m[  590] = -0.2576127776;
    es1_mean_0_sd_1_n_10_fixpt.m[  591] = 1.146584921;
    es1_mean_0_sd_1_n_10_fixpt.m[  592] = 1.724021936;
    es1_mean_0_sd_1_n_10_fixpt.m[  593] = 1.217198311;
    es1_mean_0_sd_1_n_10_fixpt.m[  594] = -0.7503137246;
    es1_mean_0_sd_1_n_10_fixpt.m[  595] = -0.6077065326;
    es1_mean_0_sd_1_n_10_fixpt.m[  596] = 0.5438757453;
    es1_mean_0_sd_1_n_10_fixpt.m[  597] = -0.5623653033;
    es1_mean_0_sd_1_n_10_fixpt.m[  598] = 0.5480169817;
    es1_mean_0_sd_1_n_10_fixpt.m[  599] = 1.508571457;
    es1_mean_0_sd_1_n_10_fixpt.m[  600] = 1.448576622;
    es1_mean_0_sd_1_n_10_fixpt.m[  601] = 0.005727383541;
    es1_mean_0_sd_1_n_10_fixpt.m[  602] = 0.8552117746;
    es1_mean_0_sd_1_n_10_fixpt.m[  603] = 0.7298066413;
    es1_mean_0_sd_1_n_10_fixpt.m[  604] = -1.257986834;
    es1_mean_0_sd_1_n_10_fixpt.m[  605] = -1.177604374;
    es1_mean_0_sd_1_n_10_fixpt.m[  606] = 1.223144702;
    es1_mean_0_sd_1_n_10_fixpt.m[  607] = 1.540427122;
    es1_mean_0_sd_1_n_10_fixpt.m[  608] = -0.4559673832;
    es1_mean_0_sd_1_n_10_fixpt.m[  609] = 1.536498256;
    es1_mean_0_sd_1_n_10_fixpt.m[  610] = -0.6344652909;
    es1_mean_0_sd_1_n_10_fixpt.m[  611] = -0.126473625;
    es1_mean_0_sd_1_n_10_fixpt.m[  612] = -1.618805329;
    es1_mean_0_sd_1_n_10_fixpt.m[  613] = -0.6971147647;
    es1_mean_0_sd_1_n_10_fixpt.m[  614] = -1.551483691;
    es1_mean_0_sd_1_n_10_fixpt.m[  615] = -1.073330165;
    es1_mean_0_sd_1_n_10_fixpt.m[  616] = 1.502837438;
    es1_mean_0_sd_1_n_10_fixpt.m[  617] = 0.653671603;
    es1_mean_0_sd_1_n_10_fixpt.m[  618] = 0.6385932548;
    es1_mean_0_sd_1_n_10_fixpt.m[  619] = 1.118551936;
    es1_mean_0_sd_1_n_10_fixpt.m[  620] = 0.9962261838;
    es1_mean_0_sd_1_n_10_fixpt.m[  621] = 1.724234307;
    es1_mean_0_sd_1_n_10_fixpt.m[  622] = 1.17355605;
    es1_mean_0_sd_1_n_10_fixpt.m[  623] = -1.525892974;
    es1_mean_0_sd_1_n_10_fixpt.m[  624] = -1.156048707;
    es1_mean_0_sd_1_n_10_fixpt.m[  625] = 1.502094139;
    es1_mean_0_sd_1_n_10_fixpt.m[  626] = 0.4629623571;
    es1_mean_0_sd_1_n_10_fixpt.m[  627] = -0.6107859134;
    es1_mean_0_sd_1_n_10_fixpt.m[  628] = -1.603939352;
    es1_mean_0_sd_1_n_10_fixpt.m[  629] = 0.01061191875;
    es1_mean_0_sd_1_n_10_fixpt.m[  630] = 1.271777683;
    es1_mean_0_sd_1_n_10_fixpt.m[  631] = -0.7593394963;
    es1_mean_0_sd_1_n_10_fixpt.m[  632] = 0.7681396245;
    es1_mean_0_sd_1_n_10_fixpt.m[  633] = -0.8897353506;
    es1_mean_0_sd_1_n_10_fixpt.m[  634] = 1.533949803;
    es1_mean_0_sd_1_n_10_fixpt.m[  635] = -1.099982737;
    es1_mean_0_sd_1_n_10_fixpt.m[  636] = 0.1867737442;
    es1_mean_0_sd_1_n_10_fixpt.m[  637] = -0.5001405717;
    es1_mean_0_sd_1_n_10_fixpt.m[  638] = -1.436803299;
    es1_mean_0_sd_1_n_10_fixpt.m[  639] = -0.5035385091;
    es1_mean_0_sd_1_n_10_fixpt.m[  640] = -1.602665126;
    es1_mean_0_sd_1_n_10_fixpt.m[  641] = -0.3170766851;
    es1_mean_0_sd_1_n_10_fixpt.m[  642] = 1.289085927;
    es1_mean_0_sd_1_n_10_fixpt.m[  643] = 0.9370808331;
    es1_mean_0_sd_1_n_10_fixpt.m[  644] = 0.8384344578;
    es1_mean_0_sd_1_n_10_fixpt.m[  645] = 0.9197725886;
    es1_mean_0_sd_1_n_10_fixpt.m[  646] = 0.1756242616;
    es1_mean_0_sd_1_n_10_fixpt.m[  647] = -1.359818776;
    es1_mean_0_sd_1_n_10_fixpt.m[  648] = 0.7803509627;
    es1_mean_0_sd_1_n_10_fixpt.m[  649] = -0.4251735737;
    es1_mean_0_sd_1_n_10_fixpt.m[  650] = -0.6846910554;
    es1_mean_0_sd_1_n_10_fixpt.m[  651] = -0.9674631725;
    es1_mean_0_sd_1_n_10_fixpt.m[  652] = 1.120038534;
    es1_mean_0_sd_1_n_10_fixpt.m[  653] = -1.284533221;
    es1_mean_0_sd_1_n_10_fixpt.m[  654] = 1.203288004;
    es1_mean_0_sd_1_n_10_fixpt.m[  655] = -0.4495962504;
    es1_mean_0_sd_1_n_10_fixpt.m[  656] = 0.001798518235;
    es1_mean_0_sd_1_n_10_fixpt.m[  657] = -0.506193148;
    es1_mean_0_sd_1_n_10_fixpt.m[  658] = -0.02740250784;
    es1_mean_0_sd_1_n_10_fixpt.m[  659] = -1.068658;
    es1_mean_0_sd_1_n_10_fixpt.m[  660] = 0.3923489668;
    es1_mean_0_sd_1_n_10_fixpt.m[  661] = 0.6897746895;
    es1_mean_0_sd_1_n_10_fixpt.m[  662] = -1.143731183;
    es1_mean_0_sd_1_n_10_fixpt.m[  663] = 0.9332581533;
    es1_mean_0_sd_1_n_10_fixpt.m[  664] = 1.09795194;
    es1_mean_0_sd_1_n_10_fixpt.m[  665] = -1.737945515;
    es1_mean_0_sd_1_n_10_fixpt.m[  666] = -0.206006601;
    es1_mean_0_sd_1_n_10_fixpt.m[  667] = 0.7178076743;
    es1_mean_0_sd_1_n_10_fixpt.m[  668] = 1.514624034;
    es1_mean_0_sd_1_n_10_fixpt.m[  669] = -0.6343591053;
    es1_mean_0_sd_1_n_10_fixpt.m[  670] = -1.654589859;
    es1_mean_0_sd_1_n_10_fixpt.m[  671] = 0.5441943021;
    es1_mean_0_sd_1_n_10_fixpt.m[  672] = -1.524618747;
    es1_mean_0_sd_1_n_10_fixpt.m[  673] = 0.9308158858;
    es1_mean_0_sd_1_n_10_fixpt.m[  674] = 1.417570442;
    es1_mean_0_sd_1_n_10_fixpt.m[  675] = -1.224750757;
    es1_mean_0_sd_1_n_10_fixpt.m[  676] = 0.5287973974;
    es1_mean_0_sd_1_n_10_fixpt.m[  677] = -0.545481801;
    es1_mean_0_sd_1_n_10_fixpt.m[  678] = 0.06529747648;
    es1_mean_0_sd_1_n_10_fixpt.m[  679] = -1.156367264;
    es1_mean_0_sd_1_n_10_fixpt.m[  680] = -0.2633467973;
    es1_mean_0_sd_1_n_10_fixpt.m[  681] = -0.5064055191;
    es1_mean_0_sd_1_n_10_fixpt.m[  682] = -1.622946566;
    es1_mean_0_sd_1_n_10_fixpt.m[  683] = -0.4232622338;
    es1_mean_0_sd_1_n_10_fixpt.m[  684] = -0.6053704505;
    es1_mean_0_sd_1_n_10_fixpt.m[  685] = 0.5274169852;
    es1_mean_0_sd_1_n_10_fixpt.m[  686] = -0.6091931302;
    es1_mean_0_sd_1_n_10_fixpt.m[  687] = -0.3910880126;
    es1_mean_0_sd_1_n_10_fixpt.m[  688] = -0.5104405698;
    es1_mean_0_sd_1_n_10_fixpt.m[  689] = -0.7326869236;
    es1_mean_0_sd_1_n_10_fixpt.m[  690] = 0.3413799033;
    es1_mean_0_sd_1_n_10_fixpt.m[  691] = 1.638224012;
    es1_mean_0_sd_1_n_10_fixpt.m[  692] = 0.02303562802;
    es1_mean_0_sd_1_n_10_fixpt.m[  693] = 0.9970756681;
    es1_mean_0_sd_1_n_10_fixpt.m[  694] = -0.9142642124;
    es1_mean_0_sd_1_n_10_fixpt.m[  695] = 0.5421767766;
    es1_mean_0_sd_1_n_10_fixpt.m[  696] = 0.5634138864;
    es1_mean_0_sd_1_n_10_fixpt.m[  697] = 0.4760231797;
    es1_mean_0_sd_1_n_10_fixpt.m[  698] = 1.378706531;
    es1_mean_0_sd_1_n_10_fixpt.m[  699] = 0.261422185;
    es1_mean_0_sd_1_n_10_fixpt.m[  700] = 0.4839870958;
    es1_mean_0_sd_1_n_10_fixpt.m[  701] = -0.9442085372;
    es1_mean_0_sd_1_n_10_fixpt.m[  702] = -0.469240577;
    es1_mean_0_sd_1_n_10_fixpt.m[  703] = 1.711173484;
    es1_mean_0_sd_1_n_10_fixpt.m[  704] = -0.8734889613;
    es1_mean_0_sd_1_n_10_fixpt.m[  705] = 1.145735437;
    es1_mean_0_sd_1_n_10_fixpt.m[  706] = -0.8935580305;
    es1_mean_0_sd_1_n_10_fixpt.m[  707] = -0.3284385388;
    es1_mean_0_sd_1_n_10_fixpt.m[  708] = 0.3481757785;
    es1_mean_0_sd_1_n_10_fixpt.m[  709] = 1.00705711;
    es1_mean_0_sd_1_n_10_fixpt.m[  710] = 1.564106499;
    es1_mean_0_sd_1_n_10_fixpt.m[  711] = 0.5061798755;
    es1_mean_0_sd_1_n_10_fixpt.m[  712] = -0.1865746456;
    es1_mean_0_sd_1_n_10_fixpt.m[  713] = 0.4343984446;
    es1_mean_0_sd_1_n_10_fixpt.m[  714] = -1.380312587;
    es1_mean_0_sd_1_n_10_fixpt.m[  715] = 1.233232329;
    es1_mean_0_sd_1_n_10_fixpt.m[  716] = 1.243957069;
    es1_mean_0_sd_1_n_10_fixpt.m[  717] = -1.282940438;
    es1_mean_0_sd_1_n_10_fixpt.m[  718] = 1.058132359;
    es1_mean_0_sd_1_n_10_fixpt.m[  719] = 0.95099114;
    es1_mean_0_sd_1_n_10_fixpt.m[  720] = 1.712022969;
    es1_mean_0_sd_1_n_10_fixpt.m[  721] = -1.082780679;
    es1_mean_0_sd_1_n_10_fixpt.m[  722] = 1.196492129;
    es1_mean_0_sd_1_n_10_fixpt.m[  723] = -0.9399611151;
    es1_mean_0_sd_1_n_10_fixpt.m[  724] = -0.8488539141;
    es1_mean_0_sd_1_n_10_fixpt.m[  725] = -0.3069890579;
    es1_mean_0_sd_1_n_10_fixpt.m[  726] = -0.4107323391;
    es1_mean_0_sd_1_n_10_fixpt.m[  727] = -0.9088487495;
    es1_mean_0_sd_1_n_10_fixpt.m[  728] = 0.442999474;
    es1_mean_0_sd_1_n_10_fixpt.m[  729] = -0.6928673428;
    es1_mean_0_sd_1_n_10_fixpt.m[  730] = -1.342935273;
    es1_mean_0_sd_1_n_10_fixpt.m[  731] = 0.4164530863;
    es1_mean_0_sd_1_n_10_fixpt.m[  732] = -0.2538962835;
    es1_mean_0_sd_1_n_10_fixpt.m[  733] = -1.554350701;
    es1_mean_0_sd_1_n_10_fixpt.m[  734] = -0.1156426989;
    es1_mean_0_sd_1_n_10_fixpt.m[  735] = 0.1338933411;
    es1_mean_0_sd_1_n_10_fixpt.m[  736] = -0.6269261169;
    es1_mean_0_sd_1_n_10_fixpt.m[  737] = 0.6513355207;
    es1_mean_0_sd_1_n_10_fixpt.m[  738] = 1.213375631;
    es1_mean_0_sd_1_n_10_fixpt.m[  739] = 1.319773551;
    es1_mean_0_sd_1_n_10_fixpt.m[  740] = 1.126303481;
    es1_mean_0_sd_1_n_10_fixpt.m[  741] = 0.4781468906;
    es1_mean_0_sd_1_n_10_fixpt.m[  742] = -0.03685302171;
    es1_mean_0_sd_1_n_10_fixpt.m[  743] = 1.226436454;
    es1_mean_0_sd_1_n_10_fixpt.m[  744] = -1.353553828;
    es1_mean_0_sd_1_n_10_fixpt.m[  745] = -0.07890249905;
    es1_mean_0_sd_1_n_10_fixpt.m[  746] = 1.383060138;
    es1_mean_0_sd_1_n_10_fixpt.m[  747] = 0.8528756925;
    es1_mean_0_sd_1_n_10_fixpt.m[  748] = -0.412643679;
    es1_mean_0_sd_1_n_10_fixpt.m[  749] = 1.477671463;
    es1_mean_0_sd_1_n_10_fixpt.m[  750] = -0.1072540407;
    es1_mean_0_sd_1_n_10_fixpt.m[  751] = -0.9724538932;
    es1_mean_0_sd_1_n_10_fixpt.m[  752] = 0.3089933109;
    es1_mean_0_sd_1_n_10_fixpt.m[  753] = 0.9962261838;
    es1_mean_0_sd_1_n_10_fixpt.m[  754] = -0.7708075356;
    es1_mean_0_sd_1_n_10_fixpt.m[  755] = -1.48639195;
    es1_mean_0_sd_1_n_10_fixpt.m[  756] = 1.053035452;
    es1_mean_0_sd_1_n_10_fixpt.m[  757] = -1.743467164;
    es1_mean_0_sd_1_n_10_fixpt.m[  758] = 0.2792613574;
    es1_mean_0_sd_1_n_10_fixpt.m[  759] = 1.192032336;
    es1_mean_0_sd_1_n_10_fixpt.m[  760] = 1.688768334;
    es1_mean_0_sd_1_n_10_fixpt.m[  761] = -0.2724787546;
    es1_mean_0_sd_1_n_10_fixpt.m[  762] = -1.540015652;
    es1_mean_0_sd_1_n_10_fixpt.m[  763] = -1.041793057;
    es1_mean_0_sd_1_n_10_fixpt.m[  764] = -0.1139437302;
    es1_mean_0_sd_1_n_10_fixpt.m[  765] = 0.1284778779;
    es1_mean_0_sd_1_n_10_fixpt.m[  766] = -0.5452694299;
    es1_mean_0_sd_1_n_10_fixpt.m[  767] = 0.01634593843;
    es1_mean_0_sd_1_n_10_fixpt.m[  768] = 1.390493127;
    es1_mean_0_sd_1_n_10_fixpt.m[  769] = 0.7498757101;
    es1_mean_0_sd_1_n_10_fixpt.m[  770] = 1.222082846;
    es1_mean_0_sd_1_n_10_fixpt.m[  771] = -0.2175808258;
    es1_mean_0_sd_1_n_10_fixpt.m[  772] = 1.627393086;
    es1_mean_0_sd_1_n_10_fixpt.m[  773] = -1.034041512;
    es1_mean_0_sd_1_n_10_fixpt.m[  774] = -0.2037767044;
    es1_mean_0_sd_1_n_10_fixpt.m[  775] = -1.288462087;
    es1_mean_0_sd_1_n_10_fixpt.m[  776] = 0.5044809068;
    es1_mean_0_sd_1_n_10_fixpt.m[  777] = -0.06435507885;
    es1_mean_0_sd_1_n_10_fixpt.m[  778] = 1.59129;
    es1_mean_0_sd_1_n_10_fixpt.m[  779] = 0.6147015064;
    es1_mean_0_sd_1_n_10_fixpt.m[  780] = -0.8034064991;
    es1_mean_0_sd_1_n_10_fixpt.m[  781] = -1.156048707;
    es1_mean_0_sd_1_n_10_fixpt.m[  782] = -1.175586848;
    es1_mean_0_sd_1_n_10_fixpt.m[  783] = -0.1631076392;
    es1_mean_0_sd_1_n_10_fixpt.m[  784] = -0.9673569868;
    es1_mean_0_sd_1_n_10_fixpt.m[  785] = -1.402823923;
    es1_mean_0_sd_1_n_10_fixpt.m[  786] = -1.366614651;
    es1_mean_0_sd_1_n_10_fixpt.m[  787] = -1.274764151;
    es1_mean_0_sd_1_n_10_fixpt.m[  788] = -0.01975714834;
    es1_mean_0_sd_1_n_10_fixpt.m[  789] = 0.8849437286;
    es1_mean_0_sd_1_n_10_fixpt.m[  790] = -0.127641666;
    es1_mean_0_sd_1_n_10_fixpt.m[  791] = 1.126834409;
    es1_mean_0_sd_1_n_10_fixpt.m[  792] = 1.447514767;
    es1_mean_0_sd_1_n_10_fixpt.m[  793] = 0.7286386003;
    es1_mean_0_sd_1_n_10_fixpt.m[  794] = 1.202650891;
    es1_mean_0_sd_1_n_10_fixpt.m[  795] = -1.010255949;
    es1_mean_0_sd_1_n_10_fixpt.m[  796] = -0.5765941667;
    es1_mean_0_sd_1_n_10_fixpt.m[  797] = -1.02214873;
    es1_mean_0_sd_1_n_10_fixpt.m[  798] = 0.5733953279;
    es1_mean_0_sd_1_n_10_fixpt.m[  799] = -1.287506416;
    es1_mean_0_sd_1_n_10_fixpt.m[  800] = 0.06912015611;
    es1_mean_0_sd_1_n_10_fixpt.m[  801] = 0.242839714;
    es1_mean_0_sd_1_n_10_fixpt.m[  802] = 0.118814993;
    es1_mean_0_sd_1_n_10_fixpt.m[  803] = -0.07030146965;
    es1_mean_0_sd_1_n_10_fixpt.m[  804] = -1.450501234;
    es1_mean_0_sd_1_n_10_fixpt.m[  805] = 0.2874376446;
    es1_mean_0_sd_1_n_10_fixpt.m[  806] = 0.9214715573;
    es1_mean_0_sd_1_n_10_fixpt.m[  807] = 1.21603027;
    es1_mean_0_sd_1_n_10_fixpt.m[  808] = -1.108689952;
    es1_mean_0_sd_1_n_10_fixpt.m[  809] = -0.04120662925;
    es1_mean_0_sd_1_n_10_fixpt.m[  810] = 1.671460089;
    es1_mean_0_sd_1_n_10_fixpt.m[  811] = 1.066521017;
    es1_mean_0_sd_1_n_10_fixpt.m[  812] = -0.7023178565;
    es1_mean_0_sd_1_n_10_fixpt.m[  813] = 0.9663880444;
    es1_mean_0_sd_1_n_10_fixpt.m[  814] = -0.4129622357;
    es1_mean_0_sd_1_n_10_fixpt.m[  815] = -0.9524910101;
    es1_mean_0_sd_1_n_10_fixpt.m[  816] = 1.309048811;
    es1_mean_0_sd_1_n_10_fixpt.m[  817] = -0.2905302979;
    es1_mean_0_sd_1_n_10_fixpt.m[  818] = 0.6671571676;
    es1_mean_0_sd_1_n_10_fixpt.m[  819] = 0.2703417712;
    es1_mean_0_sd_1_n_10_fixpt.m[  820] = -1.443174432;
    es1_mean_0_sd_1_n_10_fixpt.m[  821] = 0.5759437811;
    es1_mean_0_sd_1_n_10_fixpt.m[  822] = -0.6318106521;
    es1_mean_0_sd_1_n_10_fixpt.m[  823] = 0.2454943527;
    es1_mean_0_sd_1_n_10_fixpt.m[  824] = 0.01910676272;
    es1_mean_0_sd_1_n_10_fixpt.m[  825] = -1.198522927;
    es1_mean_0_sd_1_n_10_fixpt.m[  826] = 0.8852622851;
    es1_mean_0_sd_1_n_10_fixpt.m[  827] = -1.496267206;
    es1_mean_0_sd_1_n_10_fixpt.m[  828] = -1.70895686;
    es1_mean_0_sd_1_n_10_fixpt.m[  829] = -0.4557550121;
    es1_mean_0_sd_1_n_10_fixpt.m[  830] = 0.8969426956;
    es1_mean_0_sd_1_n_10_fixpt.m[  831] = 0.6437963468;
    es1_mean_0_sd_1_n_10_fixpt.m[  832] = 0.4115685511;
    es1_mean_0_sd_1_n_10_fixpt.m[  833] = -1.090001296;
    es1_mean_0_sd_1_n_10_fixpt.m[  834] = -0.5666127251;
    es1_mean_0_sd_1_n_10_fixpt.m[  835] = 1.521207538;
    es1_mean_0_sd_1_n_10_fixpt.m[  836] = 0.4424685463;
    es1_mean_0_sd_1_n_10_fixpt.m[  837] = 0.5389912101;
    es1_mean_0_sd_1_n_10_fixpt.m[  838] = -1.478534219;
    es1_mean_0_sd_1_n_10_fixpt.m[  839] = -0.2943529775;
    es1_mean_0_sd_1_n_10_fixpt.m[  840] = 0.9028890864;
    es1_mean_0_sd_1_n_10_fixpt.m[  841] = 0.4503262769;
    es1_mean_0_sd_1_n_10_fixpt.m[  842] = 1.114729256;
    es1_mean_0_sd_1_n_10_fixpt.m[  843] = 1.125347811;
    es1_mean_0_sd_1_n_10_fixpt.m[  844] = 0.5302839952;
    es1_mean_0_sd_1_n_10_fixpt.m[  845] = -0.1631076392;
    es1_mean_0_sd_1_n_10_fixpt.m[  846] = -0.7610384652;
    es1_mean_0_sd_1_n_10_fixpt.m[  847] = -0.6045209661;
    es1_mean_0_sd_1_n_10_fixpt.m[  848] = -0.2005911381;
    es1_mean_0_sd_1_n_10_fixpt.m[  849] = -0.6167323042;
    es1_mean_0_sd_1_n_10_fixpt.m[  850] = 0.1732881796;
    es1_mean_0_sd_1_n_10_fixpt.m[  851] = -1.386683719;
    es1_mean_0_sd_1_n_10_fixpt.m[  852] = 0.8204890999;
    es1_mean_0_sd_1_n_10_fixpt.m[  853] = 0.004559342517;
    es1_mean_0_sd_1_n_10_fixpt.m[  854] = -1.42937031;
    es1_mean_0_sd_1_n_10_fixpt.m[  855] = 0.006470682332;
    es1_mean_0_sd_1_n_10_fixpt.m[  856] = 0.8564860011;
    es1_mean_0_sd_1_n_10_fixpt.m[  857] = -1.625813575;
    es1_mean_0_sd_1_n_10_fixpt.m[  858] = -0.9895497665;
    es1_mean_0_sd_1_n_10_fixpt.m[  859] = 0.8210200279;
    es1_mean_0_sd_1_n_10_fixpt.m[  860] = 1.314676645;
    es1_mean_0_sd_1_n_10_fixpt.m[  861] = -1.341554861;
    es1_mean_0_sd_1_n_10_fixpt.m[  862] = 0.3649530951;
    es1_mean_0_sd_1_n_10_fixpt.m[  863] = -0.09780352679;
    es1_mean_0_sd_1_n_10_fixpt.m[  864] = 0.1353799386;
    es1_mean_0_sd_1_n_10_fixpt.m[  865] = 0.9895364942;
    es1_mean_0_sd_1_n_10_fixpt.m[  866] = 1.239603462;
    es1_mean_0_sd_1_n_10_fixpt.m[  867] = -0.7940621707;
    es1_mean_0_sd_1_n_10_fixpt.m[  868] = -0.1273231094;
    es1_mean_0_sd_1_n_10_fixpt.m[  869] = -1.46419917;
    es1_mean_0_sd_1_n_10_fixpt.m[  870] = 0.5005520415;
    es1_mean_0_sd_1_n_10_fixpt.m[  871] = -0.8272982475;
    es1_mean_0_sd_1_n_10_fixpt.m[  872] = -0.6091931302;
    es1_mean_0_sd_1_n_10_fixpt.m[  873] = -0.6312797244;
    es1_mean_0_sd_1_n_10_fixpt.m[  874] = -0.04417982465;
    es1_mean_0_sd_1_n_10_fixpt.m[  875] = 1.556567325;
    es1_mean_0_sd_1_n_10_fixpt.m[  876] = 1.468220949;
    es1_mean_0_sd_1_n_10_fixpt.m[  877] = 0.604189137;
    es1_mean_0_sd_1_n_10_fixpt.m[  878] = 0.6011097562;
    es1_mean_0_sd_1_n_10_fixpt.m[  879] = 0.2463438371;
    es1_mean_0_sd_1_n_10_fixpt.m[  880] = 0.7568839563;
    es1_mean_0_sd_1_n_10_fixpt.m[  881] = 0.6059942914;
    es1_mean_0_sd_1_n_10_fixpt.m[  882] = -0.5029013958;
    es1_mean_0_sd_1_n_10_fixpt.m[  883] = 1.505704447;
    es1_mean_0_sd_1_n_10_fixpt.m[  884] = -1.695683667;
    es1_mean_0_sd_1_n_10_fixpt.m[  885] = 1.084784932;
    es1_mean_0_sd_1_n_10_fixpt.m[  886] = -0.4331374899;
    es1_mean_0_sd_1_n_10_fixpt.m[  887] = -1.502319782;
    es1_mean_0_sd_1_n_10_fixpt.m[  888] = 0.1278407646;
    es1_mean_0_sd_1_n_10_fixpt.m[  889] = 1.374459109;
    es1_mean_0_sd_1_n_10_fixpt.m[  890] = 1.104323072;
    es1_mean_0_sd_1_n_10_fixpt.m[  891] = 0.6720417028;
    es1_mean_0_sd_1_n_10_fixpt.m[  892] = 0.816029307;
    es1_mean_0_sd_1_n_10_fixpt.m[  893] = -0.6513487932;
    es1_mean_0_sd_1_n_10_fixpt.m[  894] = 1.200420994;
    es1_mean_0_sd_1_n_10_fixpt.m[  895] = 1.126622038;
    es1_mean_0_sd_1_n_10_fixpt.m[  896] = 0.1111696335;
    es1_mean_0_sd_1_n_10_fixpt.m[  897] = 1.259778716;
    es1_mean_0_sd_1_n_10_fixpt.m[  898] = 1.195536459;
    es1_mean_0_sd_1_n_10_fixpt.m[  899] = -0.07996435463;
    es1_mean_0_sd_1_n_10_fixpt.m[  900] = 1.258292118;
    es1_mean_0_sd_1_n_10_fixpt.m[  901] = -0.7094322883;
    es1_mean_0_sd_1_n_10_fixpt.m[  902] = -0.350737504;
    es1_mean_0_sd_1_n_10_fixpt.m[  903] = 1.238966348;
    es1_mean_0_sd_1_n_10_fixpt.m[  904] = 0.7981901348;
    es1_mean_0_sd_1_n_10_fixpt.m[  905] = -0.8690291683;
    es1_mean_0_sd_1_n_10_fixpt.m[  906] = -1.226555912;
    es1_mean_0_sd_1_n_10_fixpt.m[  907] = 1.494448779;
    es1_mean_0_sd_1_n_10_fixpt.m[  908] = -1.380843514;
    es1_mean_0_sd_1_n_10_fixpt.m[  909] = 0.6969953068;
    es1_mean_0_sd_1_n_10_fixpt.m[  910] = -1.660430064;
    es1_mean_0_sd_1_n_10_fixpt.m[  911] = 1.074166377;
    es1_mean_0_sd_1_n_10_fixpt.m[  912] = -0.3303498786;
    es1_mean_0_sd_1_n_10_fixpt.m[  913] = 0.3850221639;
    es1_mean_0_sd_1_n_10_fixpt.m[  914] = 1.527791042;
    es1_mean_0_sd_1_n_10_fixpt.m[  915] = 1.15019523;
    es1_mean_0_sd_1_n_10_fixpt.m[  916] = 1.352584886;
    es1_mean_0_sd_1_n_10_fixpt.m[  917] = 1.48967043;
    es1_mean_0_sd_1_n_10_fixpt.m[  918] = -0.2314911326;
    es1_mean_0_sd_1_n_10_fixpt.m[  919] = 0.8746437302;
    es1_mean_0_sd_1_n_10_fixpt.m[  920] = 0.6339210907;
    es1_mean_0_sd_1_n_10_fixpt.m[  921] = 0.2698108435;
    es1_mean_0_sd_1_n_10_fixpt.m[  922] = -0.68171786;
    es1_mean_0_sd_1_n_10_fixpt.m[  923] = 1.594900308;
    es1_mean_0_sd_1_n_10_fixpt.m[  924] = 0.9685117556;
    es1_mean_0_sd_1_n_10_fixpt.m[  925] = 0.402861336;
    es1_mean_0_sd_1_n_10_fixpt.m[  926] = 0.95099114;
    es1_mean_0_sd_1_n_10_fixpt.m[  927] = -1.373410526;
    es1_mean_0_sd_1_n_10_fixpt.m[  928] = 0.883457131;
    es1_mean_0_sd_1_n_10_fixpt.m[  929] = -1.043173469;
    es1_mean_0_sd_1_n_10_fixpt.m[  930] = -1.017264195;
    es1_mean_0_sd_1_n_10_fixpt.m[  931] = -1.470039375;
    es1_mean_0_sd_1_n_10_fixpt.m[  932] = -0.007651995867;
    es1_mean_0_sd_1_n_10_fixpt.m[  933] = 0.09587891446;
    es1_mean_0_sd_1_n_10_fixpt.m[  934] = 1.479901359;
    es1_mean_0_sd_1_n_10_fixpt.m[  935] = 0.675758197;
    es1_mean_0_sd_1_n_10_fixpt.m[  936] = 0.8039241545;
    es1_mean_0_sd_1_n_10_fixpt.m[  937] = -0.3471271954;
    es1_mean_0_sd_1_n_10_fixpt.m[  938] = -1.310442495;
    es1_mean_0_sd_1_n_10_fixpt.m[  939] = -1.557536268;
    es1_mean_0_sd_1_n_10_fixpt.m[  940] = 0.3429726865;
    es1_mean_0_sd_1_n_10_fixpt.m[  941] = 0.2620592983;
    es1_mean_0_sd_1_n_10_fixpt.m[  942] = -0.1574798052;
    es1_mean_0_sd_1_n_10_fixpt.m[  943] = 1.461956001;
    es1_mean_0_sd_1_n_10_fixpt.m[  944] = -1.340917748;
    es1_mean_0_sd_1_n_10_fixpt.m[  945] = 0.1858180743;
    es1_mean_0_sd_1_n_10_fixpt.m[  946] = -0.7403322831;
    es1_mean_0_sd_1_n_10_fixpt.m[  947] = -1.443174432;
    es1_mean_0_sd_1_n_10_fixpt.m[  948] = 0.8458674462;
    es1_mean_0_sd_1_n_10_fixpt.m[  949] = 1.610934326;
    es1_mean_0_sd_1_n_10_fixpt.m[  950] = -1.12950232;
    es1_mean_0_sd_1_n_10_fixpt.m[  951] = -1.516548646;
    es1_mean_0_sd_1_n_10_fixpt.m[  952] = 1.369574574;
    es1_mean_0_sd_1_n_10_fixpt.m[  953] = -1.055172436;
    es1_mean_0_sd_1_n_10_fixpt.m[  954] = 0.2656696071;
    es1_mean_0_sd_1_n_10_fixpt.m[  955] = -1.462181645;
    es1_mean_0_sd_1_n_10_fixpt.m[  956] = 0.4003128828;
    es1_mean_0_sd_1_n_10_fixpt.m[  957] = -0.1523828988;
    es1_mean_0_sd_1_n_10_fixpt.m[  958] = -0.5523838617;
    es1_mean_0_sd_1_n_10_fixpt.m[  959] = 0.7377705574;
    es1_mean_0_sd_1_n_10_fixpt.m[  960] = -0.808821962;
    es1_mean_0_sd_1_n_10_fixpt.m[  961] = 1.254787995;
    es1_mean_0_sd_1_n_10_fixpt.m[  962] = -1.694197069;
    es1_mean_0_sd_1_n_10_fixpt.m[  963] = -1.290161055;
    es1_mean_0_sd_1_n_10_fixpt.m[  964] = -0.1591787739;
    es1_mean_0_sd_1_n_10_fixpt.m[  965] = 0.962990107;
    es1_mean_0_sd_1_n_10_fixpt.m[  966] = -0.1297653769;
    es1_mean_0_sd_1_n_10_fixpt.m[  967] = -0.6776828093;
    es1_mean_0_sd_1_n_10_fixpt.m[  968] = 1.719349772;
    es1_mean_0_sd_1_n_10_fixpt.m[  969] = -1.650554808;
    es1_mean_0_sd_1_n_10_fixpt.m[  970] = 1.370105501;
    es1_mean_0_sd_1_n_10_fixpt.m[  971] = -1.288674457;
    es1_mean_0_sd_1_n_10_fixpt.m[  972] = -0.9846652313;
    es1_mean_0_sd_1_n_10_fixpt.m[  973] = -1.314689917;
    es1_mean_0_sd_1_n_10_fixpt.m[  974] = 0.8631756906;
    es1_mean_0_sd_1_n_10_fixpt.m[  975] = 1.101243692;
    es1_mean_0_sd_1_n_10_fixpt.m[  976] = -0.4798591319;
    es1_mean_0_sd_1_n_10_fixpt.m[  977] = -1.027245636;
    es1_mean_0_sd_1_n_10_fixpt.m[  978] = 0.1486531321;
    es1_mean_0_sd_1_n_10_fixpt.m[  979] = 0.06349232211;
    es1_mean_0_sd_1_n_10_fixpt.m[  980] = -0.4828323273;
    es1_mean_0_sd_1_n_10_fixpt.m[  981] = 1.079157097;
    es1_mean_0_sd_1_n_10_fixpt.m[  982] = -1.148509533;
    es1_mean_0_sd_1_n_10_fixpt.m[  983] = 0.1768984883;
    es1_mean_0_sd_1_n_10_fixpt.m[  984] = 1.003871543;
    es1_mean_0_sd_1_n_10_fixpt.m[  985] = -1.216468284;
    es1_mean_0_sd_1_n_10_fixpt.m[  986] = 0.664927271;
    es1_mean_0_sd_1_n_10_fixpt.m[  987] = -1.264145596;
    es1_mean_0_sd_1_n_10_fixpt.m[  988] = -0.8470487597;
    es1_mean_0_sd_1_n_10_fixpt.m[  989] = -1.572083688;
    es1_mean_0_sd_1_n_10_fixpt.m[  990] = -1.19533736;
    es1_mean_0_sd_1_n_10_fixpt.m[  991] = -1.492338341;
    es1_mean_0_sd_1_n_10_fixpt.m[  992] = -1.594170282;
    es1_mean_0_sd_1_n_10_fixpt.m[  993] = -1.091487893;
    es1_mean_0_sd_1_n_10_fixpt.m[  994] = -0.06647878978;
    es1_mean_0_sd_1_n_10_fixpt.m[  995] = -0.9768075007;
    es1_mean_0_sd_1_n_10_fixpt.m[  996] = -0.9760642019;
    es1_mean_0_sd_1_n_10_fixpt.m[  997] = 1.141700386;
    es1_mean_0_sd_1_n_10_fixpt.m[  998] = 1.419906524;
    es1_mean_0_sd_1_n_10_fixpt.m[  999] = -0.8735951469;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1000] = -1.429157939;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1001] = 0.5731829568;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1002] = -1.41386722;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1003] = 0.02197377244;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1004] = -1.135661082;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1005] = 1.550514749;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1006] = -0.5615158188;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1007] = -0.2074931986;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1008] = 0.2418840441;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1009] = 0.1682974587;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1010] = -1.723716652;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1011] = -0.06116951234;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1012] = 1.512818879;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1013] = -1.236537353;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1014] = 0.4936499808;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1015] = 0.998031338;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1016] = 1.358849833;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1017] = -1.331254863;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1018] = 1.257655005;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1019] = 0.8339746648;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1020] = -1.318406412;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1021] = -0.392893167;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1022] = -0.05957672908;
    es1_mean_0_sd_1_n_10_fixpt.m[ 1023] = 0.4897211154;
 }




void new_code_test_128()
{
    size_t i;
    data_t rslt, rtmp, totalDataLen;

    prepare_data_random_n_128_fixedpoint();

    totalDataLen = (data_t)N128;

    rslt = pluginFixPt(reset_op, (data_t)0.0);

    rslt = pluginFixPt(pumpdata_reset_op, (data_t)N128);

    cout << endl;

    cout << "totalDataLen = " << totalDataLen.to_string(10) << " hex = " << hex << totalDataLen.bits_to_uint64() << endl;
    //cout << "wbuf1Len = " << wbuf1Len << " hex = " << hex << wbuf1Len << endl;
    //cout << "wbuf2Len = " << wbuf2Len << " hex = " << hex << wbuf2Len << endl;

    for(i=0; i<N128; i++)
    {
        rslt = pluginFixPt(pumpdata_col_op, (data_t)es1_mean_0_sd_1_n_10_fixpt[i]);
    }

/*
    for(i=0; i<wbuf1Len; i++)
    {
        cout << "wbuf1[ " << i << "]=" << wbuf1[i].to_string(10) << " hex = " << hex << wbuf1[i].bits_to_uint64() << endl;
    }
    for(i=0; i<wbuf2Len; i++)
    {
        cout << "wbuf2[ " << i << "]=" << wbuf2[i].to_string(10) << " hex = " << hex << wbuf2[i].bits_to_uint64() << endl;
    }

    for(i=0; i<wbufLen; i++)
    {
        cout << "wbuf[ " << i << "]=" << wbuf[i].to_string(10) << " hex = " << hex << wbuf[i].bits_to_uint64() << endl;
    }
*/

    cout << endl;

    rslt = pluginFixPt(varest_fin_op, (data_t)0.0);
    cout << "[1] V = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(stddev_op, rslt);
    cout << "[2] sigma = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estpsi8_op, rslt);
    cout << "[3] psins8 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estg1_op, rslt );
    cout << "[4] g1 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rtmp = pluginFixPt(estpsi6_reset_op, (data_t)0.0);
    rslt = pluginFixPt(estpsi6_setup_op, rslt);

    rslt = pluginFixPt(estpsi6_col_op_new, (data_t)0.0);

    rslt = pluginFixPt(estpsi6_fin_op, (data_t)0.0);
    cout << "[5] psi6g1 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estg2_op, rslt);
    cout << "[6] g2 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    //rtmp = pluginFixPt(estpsi4_reset_op, (data_t)0.0, (data_t)0.0);
    rslt = pluginFixPt(estpsi4_setup_op, rslt);

    rslt = pluginFixPt(estpsi4_col_op_new, (data_t)0.0);

    rslt = pluginFixPt(estpsi4_fin_op, (data_t)0.0);
    cout << "[7] psi4g2 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(esth_op, rslt);
    cout << "[8] h = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;
    stddev = 0.579235;
    cout << "[8] h * stddev = " << ((data_t)(rslt*stddev)).to_string(10) << " hex = " << hex << ((data_t)(rslt*stddev)).bits_to_uint64() << endl;
}

void new_code_test_1024()
{
    size_t i;
    data_t rslt, rtmp, totalDataLen;

    prepare_data_random_n_1024_fixedpoint();

    totalDataLen = (data_t)N1024;

    rslt = pluginFixPt(reset_op, (data_t)0.0);

    rslt = pluginFixPt(pumpdata_reset_op, (data_t)N1024);

    cout << endl;

    cout << "totalDataLen = " << totalDataLen.to_string(10) << " hex = " << hex << totalDataLen.bits_to_uint64() << endl;

    for(i=0; i<N1024; i++)
    {
        rslt = pluginFixPt(pumpdata_col_op, (data_t)es1_mean_0_sd_1_n_10_fixpt[i]);
    }

    cout << endl;

    rslt = pluginFixPt(varest_fin_op, (data_t)0.0);
    cout << "[1] V = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(stddev_op, rslt);
    cout << "[2] sigma = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estpsi8_op, rslt);
    cout << "[3] psins8 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estg1_op, rslt );
    cout << "[4] g1 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rtmp = pluginFixPt(estpsi6_reset_op, (data_t)0.0);
    rslt = pluginFixPt(estpsi6_setup_op, rslt);

    rslt = pluginFixPt(estpsi6_col_op_new, (data_t)0.0);

    rslt = pluginFixPt(estpsi6_fin_op, (data_t)0.0);
    cout << "[5] psi6g1 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estg2_op, rslt);
    cout << "[6] g2 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(estpsi4_setup_op, rslt);

    rslt = pluginFixPt(estpsi4_col_op_new, (data_t)0.0);

    rslt = pluginFixPt(estpsi4_fin_op, (data_t)0.0);
    cout << "[7] psi4g2 = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;

    rslt = pluginFixPt(esth_op, rslt);
    stddev =  0.579235;
    cout << "[8] h = " << rslt.to_string(10) << " hex = " << hex << rslt.bits_to_uint64() << endl;
    cout << "[8] h * stddev = " << ((data_t)(rslt*stddev)).to_string(10) << " hex = " << hex << ((data_t)(rslt*stddev)).bits_to_uint64() << endl;
}

int main(int argc, char *argv[])
{

    //new_code_test_128();
    new_code_test_1024();

    return 0;
}
