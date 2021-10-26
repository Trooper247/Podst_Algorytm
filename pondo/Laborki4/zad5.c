#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main5()
{
    int tab[10];
    srand(time(NULL));
    for(int i=0;i<10;i++){
        tab[i] = rand()%10;
    }
    for(int i =0;i<10;i++){
        printf("tab = %d \n",tab[i]);
    }
    return 0;
}



