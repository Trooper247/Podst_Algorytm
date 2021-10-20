#include <stdio.h>
#include <stdlib.h>


int main4(){
    int i=0;
    double x,min =0 ;
    while (i<100){
        x = ((rand() % 10) + 1);
        if(min>x){
            min = x;
        }
        printf("\n%f", x);
        i++;
    }
    printf("\nMIN: %f",min);
    return 0;
}

