#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int tab[10];
    int max=0;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        tab[i] = rand()%10;
    }
    for(int i =0;i<10;i++){
        printf("tab = %d \n",tab[i]);
    }
    for(int i =0;i<10;i++){
        if(tab[i]>max){
            max = tab[i];
        }
    }
    printf("Maksymalna wartosc: %d",max);
    return 0;
}



