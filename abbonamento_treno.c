/* Sia data la seguente esigenza:
L’abbonamento annuale standard dell’azienda di trasporti su rotaia “Icaro” segue la tabella
riportata di seguito. Inserendo il numero di chilometri per i quali l’utente richiede l’abbonamento
(per semplicità intero, per es. 100 km), il programma visualizza l’importo da pagare.
------------TABLE-----------
    KM          €
fino a 70      750
da 71 a 180    1250
oltre 180      2150
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int km,e;
    do{
    printf("Inserisci quanti chilometri %c lungo il tuo viaggio: ",138);
    scanf("%d",&km);
    }while(km<=0);
    if(km>0&&km<=70) e = 750;
    else if(km>70&&km<180) e = 1250;
    else if(km>180) e = 2150;
    printf("Il costo del tuo viaggio %c di %d Euro.",138,e);
    return 0;
}