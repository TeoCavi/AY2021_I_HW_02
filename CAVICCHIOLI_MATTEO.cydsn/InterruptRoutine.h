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

/*ISR customizzata che viene attivata quando il pulsante viene premuto. in modo particolare, essendo un pull up, quando
viene premuto fa abbassare il pin e il debouncer genera un onda quadra sul pin neg. questa variazione di stato viene 
interpretata come interrupt che notifica la pressione del taso. Ho preferito leggere neg rispetto a pos (rilascio tasto) per avere una
risposta più immediata. */ 

#ifndef __INTERRUPT_ROUTINE_H_
    #define __INTERRUPT_ROUTINE_H_ 
    
    #include "project.h"
    
    
    /* funzione customizzata che implementa una variabile di stato una volta premuto il pulsante, per 
    cambiare stato.*/
    
    CY_ISR_PROTO(Custom_BUTTON_ISR); 
    
    
    

#endif

uint8_t stato; // variabile globale 

/* [] END OF FILE */
