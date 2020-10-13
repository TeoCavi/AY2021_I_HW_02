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
#include "project.h"
#include "InterruptRoutine.h"
#include "mod.h"
#include "driver.h"


int main(void)
{
    CyGlobalIntEnable; 
    
    CLK_DEBOUNCER_Start();
    stato = 1;
    flag = 1;
    
    ISR_BUTTON_StartEx(Custom_BUTTON_ISR);
    
    CLK_Start();
    PWM_Start();

    for(;;)
    {
        if(flag == 1)
        {
            if(stato == 1)
            {
                RG_LED_Mod(MOD1);
            }
            if(stato == 2)
            {
                RG_LED_Mod(MOD2);
            }
            if(stato == 3)
            {
                RG_LED_Mod(MOD3);
            }
            if (stato == 4)
            {
                RG_LED_Mod(MOD4);
            }
            if (stato == 5)
            {
                RG_LED_Mod(MOD5);
            }
            if (stato == 6)
            {
                RG_LED_Mod(MOD6);
            }
            if (stato == 7)
            {
                RG_LED_Mod(MOD7);
            }   
            flag = 0;
        }
    }
}

/* [] END OF FILE */
