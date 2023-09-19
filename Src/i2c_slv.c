#include <stdint.h>

#include "main.h"
#include "i2c_slv.h"

#define RX_BUF_SIZE 4

//Create instance for i2c handler
extern I2C_HandleTypeDef hi2c3;


/* Buffers for transmit and receive */
// static uint8_t TxBuf[4];
static uint8_t RxBuf[RX_BUF_SIZE];

void i2c_slv_init()
{

}


void i2c_en (){
	if(HAL_I2C_EnableListen_IT(&hi2c1) != HAL_OK)
	{
		/* Transfer error in reception process */
		Error_Handler();
	}
}
