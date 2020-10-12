Funzionamento programma:

All'accensione vengono abilitate le interrupt, avviati i clock di gestione del debouncer e dei PWm, le variabili globali (definite nell'header globalvar.h) stato=1 e flag=1, 
e il for infinito.
a questo punto, essendo flag = 1 il primo if lascia passare ed essendo stato = 1 il microprocessore entra all'interno del if del primo stato (led giallo fisso). 
All'interno di questi if che dividono i vari stati viene eseguita la procedura a) attraverso la funzione RG_LED_Mod(MODn):

procedura a)

1) alla funzione viene passato il valore MOD1  che è definito in una struct all'interno del file mod.h
2) il valore MOD1 contiene i valori di periodo, compare e comparemode (less (1) o greater (2)) che vengono inseriti, tramite le sottofunzioni definite nel file driver.h (static void),
all'interno dei registri del PWM. Viene poi resettato il counter a zero e fatto partire il PWM.

A questo punto l'if è completato e ignora i seguenti fino ad impostare flag = 0, che esclude dal for il primo if in modo tale de evitare che ad ogni ciclo venga resettato il PWM.

L'acceso al primo if viene reso disponibile nuovamente quando il pulsante viene premuto. la pressione del tasto viene rilevata da un ISR sul debouncer (spiegta in InterruptRoutine.h).
quando l'ISR viene chiamata in essa viene spento il PWM; modificata la variabile flag = 1 e stato ++, in modo da permettere di accedere al if corrispondente alla modalità successiva nel main. 
la procedura a) viene ripetuta. 

Quando la variabile stato arriva a 7, nell'isr viene settata nuovamente a 1 in modo tale da poter rincominciare dallo stato 1. 

  