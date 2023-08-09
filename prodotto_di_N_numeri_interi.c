#include <stdio.h>
#include <stdlib.h>
// Dati N numeri fare il loro prodotto
int main(void){
    int num_numeri = 3;
    int numeri[num_numeri];
    int i = 0;
    int somma = 0;
    for(i = 0; i<num_numeri ; i++){
        printf("Inserisci il numero N%d:\n",i);
        scanf("%d",&numeri[i]);
        somma*=numeri[i];
    }
    printf("La somma dei %d numeri %c: %d",num_numeri,138,somma);
    return 0;
}