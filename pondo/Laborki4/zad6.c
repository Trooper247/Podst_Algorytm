#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main6()
{
    int tab[10];
    int sum;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        tab[i] = rand()%10;
    }

    for(int i =0;i<10;i++){
        printf("tab = %d \n",tab[i]);
    }
      for(int i =0;i<10;i++){
        sum = sum + tab[i];
    }
    printf("suma wynosi %d",sum);

    return 0;
}



