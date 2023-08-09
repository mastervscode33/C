#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Algoritmo che stampa da giorni,ore,minuti e secondi una somma totale delle variabili in secondi
int main(void){
    char *dati[] = {"giorni","ore","minuti","secondi"};
    int lenght = sizeof(dati) / sizeof(dati[0]);
    int i = 0;
    int num,tot; 
    for(i = 0;i < lenght; i++){
        printf("Inserisci %s:",dati[i]);
        scanf("%d",&num);
        if(i==0) num = (((num * 24) * 60) * 60);
        else if(i==1) num = ((num * 60) * 60);
        else if(i==2) num = (num * 60);
        else num = num / 1;

        tot += num;
    }
    printf("Il totale in secondi %c: %d",138,tot);

    return 0;
}