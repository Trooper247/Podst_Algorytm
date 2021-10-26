#include <stdio.h>
#include <stdlib.h>

int main4()
{
    int x1[10] = {0,1,2,3,4,5,6,7,8,9};
    int x2[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++){
        for(int n=0;n<10;n++){
            printf("%d x %d = %d \n",x1[i],x2[n],(x1[i]*x2[n]));
        }
    }
    return 0;
}


