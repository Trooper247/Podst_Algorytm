#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double PI, sum,e,x = 1;
    int n = 1;
    e = (pow(10,-7));
    while(x>e){
        x = (1/(pow(n,2)));
        if ((n % 2) == 0){
            sum = sum - x;
        }else{
            sum = sum + x;
        }
        n++;
        printf("\n n= %d\n x= %1.14f",n,x);
    }

    PI = (sqrt(12*sum));
    printf("\nPI= %1.14f",PI);
    return 0;
}



