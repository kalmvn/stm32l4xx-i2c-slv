#ifndef __I2C_SLV_H
#define __I2C_SLV_H

#include "stm32l4xx_hal.h"

#define NS2009_SLV_ADDR                     0x48

#define                     COUNTOF(__BUFFER__)     (sizeof(__BUFFER__)/ sizeof(*(__BUFFER__)))

#define TXBUFSIZE           (COUNTOF(TxBuf))


#endif
