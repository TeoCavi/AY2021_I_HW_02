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


CY_ISR_PROTO(Custom_BUTTON_ISR)
{
    stato = stato + 1; //implementazione variabile di stato ad ogni pressione
}

/* [] END OF FILE */
