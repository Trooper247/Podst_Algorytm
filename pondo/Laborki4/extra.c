#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int tab[20];
    srand(time(NULL));
    for(int i=0;i<20;i++){
        tab[i] = rand()%10;
    }
    for(int i =0;i<20;i++){
        printf("%d ",tab[i]);
    }
    int last = tab[0]
    for(int i=0;i<20;i++){
        if(tab[i]){}

    }
    return 0;
}




