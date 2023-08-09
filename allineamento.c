#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int max_lenght_str;
    char *stringhe[]= {"first row","second row","third row","forth row","The Fifth row","This is the sixth row"};
    int lenght = sizeof(stringhe) / sizeof(stringhe[0]);
    int i;
    int lenght_str[lenght];
    int dist = 0;
    for(i = 0;i<lenght;i++){
        int len = strlen(stringhe[i]);
        lenght_str[i] = len;
    }
    for(i = 0; i<lenght;i++){
        if(i==0) max_lenght_str = lenght_str[i];
        else{
            if(lenght_str[i] > max_lenght_str){
                max_lenght_str = lenght_str[i];
            }
        }
    }
    // Trovato la massima lunghezza di una serie di stringhe passiamo all'allinemanto
    for(i = 0;i<lenght;i++){
        if(lenght_str[i]<max_lenght_str){
            dist = max_lenght_str - lenght_str[i];
            while(dist>0){
                printf(" ");
                dist--;
            };
            printf("%s\n",stringhe[i]);
        }else{
            printf(stringhe[i]);
        }
    }

}