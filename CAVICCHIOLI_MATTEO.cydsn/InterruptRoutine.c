/* ========================================
 *
 * Copyright Cavicchioli Matteo, 2020
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "InterruptRoutine.h"
#include "driver.h"


CY_ISR_PROTO(Custom_BUTTON_ISR)
{
    PWM_Stop();
    flag = 1;
    if (stato == 7)
        stato = 0;
    stato ++; //implementazione variabile di stato ad ogni pressione

}

/* [] END OF FILE */
