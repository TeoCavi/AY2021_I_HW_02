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
#include "GlobalVariables.h"

CY_ISR_PROTO(Custom_BUTTON_ISR){

    stato ++;
    if(stato == 8)
        stato = 1;
}

/* [] END OF FILE */
