#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
int main1()
{
    float x,y;
    char o;
    bool i = true;
    while (i == true)
    {
        printf("Wprowadz operacje: ");
        scanf("%f %c %f",&x, &o, &y );
        switch (o)
        {
        case '+' :
            printf("%f + %f to: %f", x, y, x+y);
            break;
        case '-':
            printf("%f - %f to: %f", x, y, x-y);
            break;
        case '*':
            printf("%f * %f to: %f", x, y, x*y);
            break;
        case '/':
            if (y != 0)
            {
                printf("%f / %f to: %f", x, y, x/y);
                break;
            }
            else
            {
                printf("Dzielenie przez 0!");
                break;
            }
        }
    }
    return 0;
}
