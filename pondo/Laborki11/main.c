#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    double *wsk, zmienna;
    zmienna = 2;
    wsk = &zmienna;
    printf("Zmienna: %f\n", *wsk);
    *wsk = 4;
    printf("Zmienna: %f\n", *wsk);
    printf("Hello world!\n");
    int *tablicaDynamiczna, rozmiar;
    printf("podaj rozmiar tablicy:\n");
    scanf("%d",&rozmiar);
    tablicaDynamiczna=(int*)malloc(rozmiar*sizeof(int));
    srand(time(0));
    for(int i=0; i<rozmiar; i++){
        tablicaDynamiczna[i]=rand()%10;
        printf("%d \t",*(tablicaDynamiczna+i));
    }
    free (tablicaDynamiczna);
    puts("\n\n\n\n");


    void kolo(float *pole, float *obwod,float *r){\
        *pole = 3.14 * pow(*r,2);
        *obwod = 2 * 3.14 * (*r);
    }
    float r,pole,obwod ,*r, *pole, *obwod;
    *r = &r;
    puts("Podaj promien: ");
    scanf("%f", r);
    kolo(r, pole, obwod);
    printf("\n%f %f %f\n", *r, *pole, *obwod);
    return 0;
}
