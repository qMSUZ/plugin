#ifndef __pluginfixpt_h__
#define __pluginfixpt_h__

#include "datatypedefs.h"


data_t pluginFixPt(const uint8bit_t &op, const data_t &v1);

/* blok do usuniecia
 * w wersji finalnej
 * 
 */ 
 
extern int wbufLen;


extern int wbufIdx;



extern data_t wbuf[32768];

//extern data_t wbuf1[32768];
//extern data_t wbuf2[32768];
//extern data_t wbuf3[32768];
//extern data_t wbuf4[32768];

/* koniec bloku do usuniecia
 * w wersji finalnej
 * 
 */ 


#endif // __pluginfixpt_h__
