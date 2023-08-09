#include <stdio.h>
#include <stdlib.h>
// num^x = pow(num,x)
int pow(int num, int x){
    int mul = num;
    if(x == 0){
        num = 1;
    }
    if(x>0){        
        while(x>1){
            num*=mul;
            x--;
        }
    }
    return num;
}
int main(void){
    printf("%d",pow(3,4));// Test
    return 0;
}