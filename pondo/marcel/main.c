#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tablicaa[15],max=0;
    for(int i=0;i<15;i++){
        tablicaa[i]=rand()%100;
    }
     for(int i=0;i<15;i++){
       printf("%d ",tablicaa[i]);
       if (tablicaa[i]>max){
            max=tablicaa[i];
       }
    }
    printf("max %d",max);


    return 0;

}
