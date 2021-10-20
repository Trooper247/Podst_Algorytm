#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main2()
{
    int PIN_SET, PIN;
    bool i = true;
    printf("Ustaw 4 cyfrowy PIN ");
    scanf("%d",&PIN_SET);
    if((PIN_SET > 9999) || (PIN_SET < 1000)){
            printf("Bledny format PIN");
            i = false;
    }
    while (i == true)
    {
        printf("\n Wprowadz PIN: ");
        scanf("%d",&PIN );
        if (PIN_SET == PIN){
            printf("Acces granted");
            break;
        }
    }

    return 0;
}

