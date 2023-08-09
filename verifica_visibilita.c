/* Sia dato il seguente problema:
L’utente inserisce due numeri interi; il programma controlla se il primo è divisibile per il secondo restituendo la risposta. Poi prosegue chiedendo di nuovo di inserire due numeri, effettuando di nuovo il controllo, e così via. Il programma termina quando i due numeri inseriti dall’utente sono entrambi zero. */
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int v = 1;
    int num1,num2;
    do{
        printf("Inserisci il numero N1: ");
        scanf("%d",&num1);
        fflush(stdin);
        printf("Inserisci il numero N2: ");
        scanf("%d",&num2);
        if(num1 == 0 & num2 == 0){
            v=0;
        }else{
            if(num1 % num2 == 0){
            printf("Il primo numero %c divisibile per il secondo.",138);
            }else{
            printf("Il primo numero non %c divisibile per il secondo.",138);
            }
            printf("\n");
        }
    }while(v == 1);
    return 0;
}