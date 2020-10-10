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
#include "project.h"
#include "InterruptRoutine.h"
#include "GlobalVariables.h"

#define HIGH 1
#define LOW 0

#define LED_OFF LOW
#define LED_ON HIGH

#define BUTTON_PRESSED HIGH

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    
    CLK_Start();
    CLK_DEBOUNCER_Start();
    ISR_BUTTON_StartEx(Custom_BUTTON_ISR);
    stato = 0;
    PWM_GREEN_Start();
    PWM_RED_Start();
    PWM_GREEN_WritePeriod(255);
    PWM_GREEN_WriteCompare(127);
    PWM_GREEN_SetCompareMode(2);
            
    PWM_RED_WritePeriod(225);
    PWM_RED_WriteCompare(127);
    PWM_RED_SetCompareMode(4);
    

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        if(stato == 1){
            CyDelay(50);
            PWM_GREEN_WritePeriod(255);
            PWM_GREEN_WriteCompare(127);
            PWM_GREEN_SetCompareMode(2);
            
            PWM_RED_WritePeriod(225);
            PWM_RED_WriteCompare(127);
            PWM_RED_SetCompareMode(4);
        }
        else
            break;

        if(stato == 2){
            CyDelay(50);
            PWM_GREEN_WritePeriod(127);
            PWM_GREEN_WriteCompare(63);
            PWM_GREEN_SetCompareMode(2);
            
            PWM_RED_WritePeriod(225);
            PWM_RED_WriteCompare(127);
            PWM_RED_SetCompareMode(4);

        }
        else if(stato == 3){
            CyDelay(50);
            PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(255);
            PWM_GREEN_WriteCompare(127);
            PWM_RED_SetCompareMode(4);
            PWM_RED_WritePeriod(127);
            PWM_RED_WriteCompare(63);

        }
        else if (stato == 4){
            CyDelay(50);
            PWM_GREEN_SetCompareMode(4);
            PWM_GREEN_WritePeriod(63);
            PWM_GREEN_WriteCompare(31);
            PWM_RED_SetCompareMode(2);
            PWM_RED_WritePeriod(63);
            PWM_RED_WriteCompare(31);
        }
        else if (stato == 5){
            CyDelay(50);
            PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(31);
            PWM_GREEN_WriteCompare(15);
            PWM_RED_SetCompareMode(4);
            PWM_RED_WritePeriod(31);
            PWM_RED_WriteCompare(15);
        }
        else if (stato == 6){
            CyDelay(50);
            PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(127);
            PWM_GREEN_WriteCompare(63);
            PWM_RED_SetCompareMode(2);
            PWM_RED_WritePeriod(127);
            PWM_RED_WriteCompare(31);
        }
        else if (stato == 7){
            CyDelay(50);
            PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(63);
            PWM_GREEN_WriteCompare(31);
            PWM_RED_SetCompareMode(4);
            PWM_RED_WritePeriod(127);
            PWM_RED_WriteCompare(63);
        }        
        
            
        
        
        
        
    }
}

/* [] END OF FILE */
