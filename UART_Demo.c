#include "UART_Demo.h"
#include "mcc_generated_files/mcc.h"

/*
 
 UART_Demo.c
 */

unsigned char read_char;

void UART_Demo_Initialize(void) 
{

    printf("\rBindu new trial UART on single Curiosity \r\n");  
    printf("UART Communications 8-bit Rx and Tx\r\n\n");
    printf("Keyboard Type H or Y: LED ON   Type L or N: LED OFF \r\n\n");

}

void UART_Demo_Command_INT(void) 
{    
    if(eusartRxCount!=0) 
    {   

    read_char=EUSART_Read();  // read a byte for RX

    EUSART_Write(read_char);  // send a byte to TX  (from Rx)

    switch(read_char)    // check command  
    {
     case 'Y':
     case 'y':
     case 'H':
     case 'h':
        {
            LED_1_SetHigh();
            LED_4_SetLow();
            printf(" -> LED On!!      \r");             
            break;
        }
     case 'N':
     case 'n':
     case 'L':
     case 'l':
        {
            LED_1_SetLow();
            LED_4_SetHigh();
            printf(" -> LED Off!!     \r");   
            break;
        }
     default:
        {
            printf(" -> Fail Command!! \r");            
            break;
        }       
    }
    }
}

/**
 End of File
 */