/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
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
    stato ++; //implementazione variabile di stato ad ogni pressione
    if (stato == 8)
        stato = 0;
}

/* [] END OF FILE */
