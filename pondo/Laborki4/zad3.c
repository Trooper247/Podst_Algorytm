#include <stdio.h>
#include <stdlib.h>

int main3()
{

    int n;
    printf("Wprowadz dokladnosc: ");
    scanf("%d",&n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2;i<n;i++){
        fibo[i] = (fibo[(i-2)] + fibo[(i-1)]);
    }
    for(int i =0;i<n;i++){
        printf("Fibo[%d]= %d \n",i,fibo[i]);
    }
    return 0;
}


