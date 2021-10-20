#include <stdio.h>
#include <stdlib.h>

int main3(){
    float x = 0, suma = 0, i = 1, avg;
    while(avg < 150 && avg > (-150)){
        printf("Dej liczbe ");
        scanf("%f",&x);
        if(x>=0){
            suma=suma+x;
            avg = suma/i;
            printf("\nOto srednia: %f\n", avg);
            i++;
        }
    }
    return 0;
}
