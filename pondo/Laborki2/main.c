#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,x,x0,x1,d,p;
    char y;
    printf("Wprowadz wartosci a b c oraz znak mniejszosci lub wiekszosci  z funkcji kwadratowej: ");
    scanf("%f %f %f %c", &a, &b, &c, &y);
    d = (pow(b,2) - (4*a*c));
    if (d > 0) {
        x0 = ((-b + sqrt(d)) / (2*a));
        x1 = ((-b - sqrt(d)) / (2*a));
        printf("Miejsca zerowe to %2.2f oraz %2.2f \n", x0, x1);
    }else if (d == 0){
        x = -b/2*a;
        printf("Miejsce zerowe to %2.2f \n",x);
    }else{
        printf("Delta ujemna czyli liczby zespolone \n");
    }
    switch (y){
        case '>':
            if(a>0 && d>0){
                printf("Funkcja maleje do x=%2.2f i od %2.2f rosnie", x0, x1);
            }else if(a<0 && d>0){
                printf("Funkcja rosnie do x=%2.2f i od %2.2f maleje", x0, x1);
            }else if (a == 0 && b>0){
                printf("Funkcja caly czas rosnie");
            }else if (a == 0 && b<0){
                printf("Funkcja caly czas maleje");
            }
            break;
        case '<':
            if(a<0 && d>0){
                printf("Funkcja rosnie do x=%2.2f i od %2.2f maleje", x0,x1);
            }else if(a<0 && d>0){
                printf("Funkcja maleje do x=%2.2f i od %2.2f rosnie", x0,x1);
            }else if (a == 0 && b>0){
                printf("Funkcja caly czas rosnie");
            }else if (a == 0 && b<0){
                printf("Funkcja caly czas maleje");
            }
            break;

         case '=':
            p = (-b/(2*a));
            if(a>0 && d>0){
                printf("Funkcja maleje do %2.2f i dalej rosnie", p);
            }else if(a<0 && d>0){
                printf("Funkcja rosnie do x=%2.2f i dalej maleje", p);
            }else if (a == 0 && b>0){
                printf("Funkcja caly czas rosnie");
            }else if (a == 0 && b<0){
                printf("Funkcja caly czas maleje");
            }else if(a>0 && d==0){
                printf("Funkcja maleje do %2.2f i dalej rosnie. Punkt %2.2f nie nalezy do funkcji", p, p);
            }else if(a<0 && d==0){
                printf("Funkcja rosnie do %2.2f i dalej maleje. Punkt %2.2f nie nalezy do funkcji", p, p);
            }
            break;
    }
    return 0;
}
