#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main2()
{
    float ln2 = 0;
    int n;
    printf("Wprowadz dokladnosc: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        ln2 = (ln2 + ((pow(-1,(i-1)))/i));
    };
    printf("ln2 = %f a z biblioteki tyle: %lf",ln2,M_LN2);
    printf("Zbieznosc wynosi %lf",M_LN2/ln2);
    return 0;
}

