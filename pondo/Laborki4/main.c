#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int suma = 0;
    for (int i=1;i<=1000;i++){
        if((i%3) == 0){
            printf("%d \n", i);
            suma = suma + i;
        };
    };
    printf("Suma liczb podzielnych przez 3 w zakresie 1-1000 wynosi %d", suma);
    return 0;
}
