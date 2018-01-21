/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F18875
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_4 aliases
#define LED_4_TRIS               TRISAbits.TRISA4
#define LED_4_LAT                LATAbits.LATA4
#define LED_4_PORT               PORTAbits.RA4
#define LED_4_WPU                WPUAbits.WPUA4
#define LED_4_OD                ODCONAbits.ODCA4
#define LED_4_ANS                ANSELAbits.ANSA4
#define LED_4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_4_GetValue()           PORTAbits.RA4
#define LED_4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_4_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_4_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_4_SetPushPull()    do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_4_SetOpenDrain()   do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_4_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_4_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED_1 aliases
#define LED_1_TRIS               TRISAbits.TRISA7
#define LED_1_LAT                LATAbits.LATA7
#define LED_1_PORT               PORTAbits.RA7
#define LED_1_WPU                WPUAbits.WPUA7
#define LED_1_OD                ODCONAbits.ODCA7
#define LED_1_ANS                ANSELAbits.ANSA7
#define LED_1_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED_1_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED_1_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED_1_GetValue()           PORTAbits.RA7
#define LED_1_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED_1_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED_1_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define LED_1_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define LED_1_SetPushPull()    do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED_1_SetOpenDrain()   do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED_1_SetAnalogMode()  do { ANSELAbits.ANSA7 = 1; } while(0)
#define LED_1_SetDigitalMode() do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set Switch aliases
#define Switch_TRIS               TRISBbits.TRISB4
#define Switch_LAT                LATBbits.LATB4
#define Switch_PORT               PORTBbits.RB4
#define Switch_WPU                WPUBbits.WPUB4
#define Switch_OD                ODCONBbits.ODCB4
#define Switch_ANS                ANSELBbits.ANSB4
#define Switch_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define Switch_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define Switch_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define Switch_GetValue()           PORTBbits.RB4
#define Switch_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define Switch_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define Switch_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define Switch_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define Switch_SetPushPull()    do { ODCONBbits.ODCB4 = 0; } while(0)
#define Switch_SetOpenDrain()   do { ODCONBbits.ODCB4 = 1; } while(0)
#define Switch_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define Switch_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()     do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()   do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()     do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()   do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/