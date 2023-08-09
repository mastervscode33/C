// Scrivere un programma che permetta di inserire un numero e che verifichi se quest'ultimo sia pari o dispari
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int num_numeri = 4;
    int numeri[num_numeri];
    int occorrenze[num_numeri];
    int i = 0;
    for(i = 0;i<num_numeri;i++){
        occorrenze[i] = 0;
    }
    i = 0;
    while(i<num_numeri){
        printf("Inserisci il numero N%d:",i);
        scanf("%d",&numeri[i]);
        printf("\n");
        if(numeri[i] % 2 == 0){
            occorrenze[i] = 1;
        }
        i++;
    }
    for(i = 0; i<num_numeri;i++){
        if(occorrenze[i] == 1){
            printf("Il numero N%d %c pari",i,138);
        }else if(occorrenze[i] == 0){
            printf("Il numero N%d %c dispari",i,138);
        }
        printf("\n");
    }
    return 0;
}