// -------------------------------------------------
// CLI.h
// 
// This UART port is for the Command Line Interface to
// Motor controller.
//
// Author:      Daniel Valvano
// Date:        May 23, 2014
// Modified by: Mark McDermott, Jonathan Valvano
// Date:        Jan 6, 2026
//
//-------------------------------------------------
//
// U0Rx connected to PA0
// U0Tx connected to PA1

#include <stdio.h>
#include <stdint.h>

//-------------------   CLI_Init  -------------------
// Configure UART0 for serial full duplex operation
// Inputs: none
// Outputs: none
void CLI_Init(void);

void CLI_SystemStatus(void);
// -----------------    CLI_Process   ----------------------------
// This routine is called periodically. It is a command line interface
// to enter values to control the Motor 
// processed one character at a time, does not spin
// There are 6 states that this routine can be in:
//      cmd_state == 0  -> RESET
//      cmd_state == 1  -> Enter new_speed
//      cmd_state == 2  -> Enter Kp1
//      cmd_state == 3  -> Enter Kp2
//      cmd_state == 4  -> Enter Ki1
//      cmd_state == 5  -> Enter Ki1
void CLI_Process(void);
