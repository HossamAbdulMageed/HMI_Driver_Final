/*
 *
 * HMI_Driver 1.02
 * This is the same version as HMI_Driver 1.01
 * I'm only relocating the unnecessary flags in their suitable source files
 *
 * */


#include "Stdint.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"
#include "HMI.h"
#include "HMI_Cfg.h"
#include "M4MemMap.h"


void main(void)
{

    GPIO_Init();
    UART_Init();
    //EN_INT(5);  //UART0
    //EN_INT(6);  //UART1
    //EN_INT(33); //UART2
    //EN_INT(59); //UART3
    //EN_INT(60); //UART4
    EN_INT(61); //UART5
    //EN_INT(63); //UART7


    HMI_Init(0);
    //HMI_GetVersion(0);
    //HMI_SelectPicture(0,0x0001);
    //HMI_GetPictureID(0);
    //HMI_SetDataVariable(0,0x0010,0x0022);
    /*
    uint16_t i = 0;
    for(i = 0; i<60000; i++)
    {

    }
    */
    HMI_SetText(0,0x0050,"       ");


    while(1)
    {}

}
