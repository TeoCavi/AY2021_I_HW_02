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
#include "mod.h"
#include "driver.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    CLK_DEBOUNCER_Start();
    stato = 0;
    
    ISR_BUTTON_StartEx(Custom_BUTTON_ISR);
    

    //PWM_GREEN_SetCompareMode(2);
    //PWM_RED_SetCompareMode(2);
    
    CLK_Start();
    
    PWM_GREEN_Start();
    PWM_RED_Start();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        if(stato == 1){
            CyDelay(50);
            RG_LED_Mod(MOD1);
            
            /*PWM_GREEN_WritePeriod(255);
            PWM_GREEN_WriteCompare(127);
            PWM_GREEN_SetCompareMode(2);
 
            PWM_RED_WritePeriod(255);
            PWM_RED_WriteCompare(127);
            PWM_RED_SetCompareMode(2);*/
            
        }
        if(stato == 2){
            CyDelay(50);
            RG_LED_Mod(MOD2);

            /*PWM_GREEN_WritePeriod(127);
            PWM_GREEN_WriteCompare(63);
            PWM_GREEN_SetCompareMode(2);
            
            PWM_RED_WritePeriod(255);
            PWM_RED_WriteCompare(127);
            PWM_RED_SetCompareMode(2);*/

        }
        if(stato == 3){
            CyDelay(50);
            RG_LED_Mod(MOD3);
            
            /*PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(255);
            PWM_GREEN_WriteCompare(127);
            PWM_RED_SetCompareMode(4);
            PWM_RED_WritePeriod(127);
            PWM_RED_WriteCompare(63);*/

        }
        if (stato == 4){
            CyDelay(50);
            RG_LED_Mod(MOD4);

            
            /*PWM_GREEN_SetCompareMode(4);
            PWM_GREEN_WritePeriod(63);
            PWM_GREEN_WriteCompare(31);
            PWM_RED_SetCompareMode(2);
            PWM_RED_WritePeriod(63);
            PWM_RED_WriteCompare(31);*/
        }
        if (stato == 5){
            CyDelay(50);
            RG_LED_Mod(MOD5);
            
            /*PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(31);
            PWM_GREEN_WriteCompare(15);
            PWM_RED_SetCompareMode(4);
            PWM_RED_WritePeriod(31);
            PWM_RED_WriteCompare(15);*/
        }
        if (stato == 6){
            CyDelay(50);
            RG_LED_Mod(MOD6);
            
            /*PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(127);
            PWM_GREEN_WriteCompare(63);
            PWM_RED_SetCompareMode(2);
            PWM_RED_WritePeriod(127);
            PWM_RED_WriteCompare(31);*/
        }
        if (stato == 7){
            CyDelay(50);
            RG_LED_Mod(MOD7);
            
            /*PWM_GREEN_SetCompareMode(2);
            PWM_GREEN_WritePeriod(63);
            PWM_GREEN_WriteCompare(31);
            PWM_RED_SetCompareMode(4);
            PWM_RED_WritePeriod(127);
            PWM_RED_WriteCompare(63);*/
        }   
        if (stato == 8)
        {
            stato = 0;
        }
    
    }
}

/* [] END OF FILE */
