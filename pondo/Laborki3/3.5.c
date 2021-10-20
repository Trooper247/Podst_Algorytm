#include <stdio.h>
#include <stdlib.h>
int main5()
{
    int x, sum;
    printf("Wprowadz liczbe dodatnia calkowita: ");
    scanf("%d",&x);
    while (x != 0){
        sum = sum + (x%10);
        x/=10;
        printf("\n%d",sum);
    }
    printf("\nSuma cyfr: %d",sum);
    return 0;
}


