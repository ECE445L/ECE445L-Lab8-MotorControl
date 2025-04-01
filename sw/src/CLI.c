// -------------------------------------------------
// CLI.c
// 
// This UART port is for the Command Line Interface to
// Motor controller.
//
// Author:      Daniel Valvano
// Date:        May 23, 2014
// Modified by: Mark McDermott, Jonathan Valvano
// Date:        Jan 12, 2025
//
//-------------------------------------------------
//
// U0Rx connected to PA0
// U0Tx connected to PA1

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#include "../inc/UART0int.h"
#include "../inc/tm4c123gh6pm.h"
#include "../inc/MotorControl.h"
#include "../inc/Tachometer.h"
#include "CLI.h"
    // write this
   



