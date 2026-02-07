#include "001.h"
#include "main.h"
#include "stm32f1xx_it.h"
#include "stm32f1xx_hal.h"

#include <stdio.h>
#include <string.h>




void seryiUART1send (char *msg) {
  //uint16_t countsizeof001;
  //countsizeof001 = sizeof(msg)-1;
    HAL_UART_Transmit(&huart1,(uint8_t*) msg, strlen(msg), 1000 );
}

