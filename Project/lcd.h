/*
 * File name            : main.c
 * Compiler             : MDK-Lite
 * IDE                  : Keil uVision V5
 * Author               : Etiq Technologies
 * Processor            : LPC1768
 * Created on           : June 17, 2017, 9:44 AM
 * Description          : LCD Header Program
 */


#include <lpc17xx.h>

//----------------------------------FUNCTION DECLARATION---------------------------------------------
// Function to process the data to be sent to the appropriate controller pins.
// Hence making it 32 bit compatible.
//---------------------------------------------------------------------------------------------------
void SEND_BITWISE(char);
//---------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------
//----------------------------------------END--------------------------------------------------------


//----------------------------------FUNCTION DECLARATION---------------------------------------------
// Function to send lcd commands to specified controller.
//---------------------------------------------------------------------------------------------------
void SEND_CMD(unsigned char);
//---------------------------------------------------------------------------------------------------
//----------------------------------------END--------------------------------------------------------


//----------------------------------FUNCTION DECLARATION---------------------------------------------
// Function to Initialize the lcd module.
//---------------------------------------------------------------------------------------------------
void INIT_LCD(void);
//---------------------------------------------------------------------------------------------------
//----------------------------------------END--------------------------------------------------------


//----------------------------------FUNCTION DECLARATION---------------------------------------------
// Function to Initialize the ports.
//---------------------------------------------------------------------------------------------------
void INIT_PORTS(void);
//---------------------------------------------------------------------------------------------------
//----------------------------------------END--------------------------------------------------------


//----------------------------------FUNCTION DECLARATION---------------------------------------------
// Function to send a single character.
//---------------------------------------------------------------------------------------------------
void SEND_CHAR_DATA(unsigned char);
//---------------------------------------------------------------------------------------------------
//----------------------------------------END--------------------------------------------------------


//----------------------------------FUNCTION DECLARATION---------------------------------------------
// Function to send a string.
//---------------------------------------------------------------------------------------------------
void SEND_STRING_DATA(char *);
//---------------------------------------------------------------------------------------------------
//----------------------------------------END--------------------------------------------------------
