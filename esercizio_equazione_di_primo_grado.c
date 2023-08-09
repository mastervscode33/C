#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Esercizio che completa l'equazione di primo grado ax = b
    printf("--- Esercizio che completa l'equazione di primo grado ax = b ---\n");
    float a,b,x;
    printf("Insersici a: ");
    scanf("%f",&a);
    printf("\nInsersici b: ");
    scanf("%f",&b);
    x = b / a;
    printf("La soluzione %c x = b / a che da come risultato: %f",138,x);
    return 0;
}