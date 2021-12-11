#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <math.h>


// zadanie 4.1
float przeciw(float a, float b){
    float c = sqrt((a*a) + (b*b));
    return c;
}


// zadanie 4.2
double silnia(int n){
    double x;
    for(int i; i <= n; i++){
        if(i==0){
            x = 1;
            continue;
        }
        x = x * i;
    }
    return x;
}

// zadanie 4.3
void centerText(char *text, int fieldWidth) {
    int padlen = (fieldWidth - strlen(text)) / 2;
    printf("*%*s%s%*s*\n", padlen, "", text, padlen, "");
}


void wiz(char name[33], char email[33], int phonenumber){
    for(int i=0;i<35;i++)printf("*");
    puts("");
    centerText(name, 34);
    centerText(email, 34);
    centerText(phonenumber, 34);
    for(int i=0;i<35;i++)printf("*");
}

float energia(float P, float t){
    float W = (P * t)/1000;
    return W;
}

float kat(int n){
    float kat=(((n-2)*180)/n);
    return kat;
}

float r(int n, int a){
    float r=(((tanh(M_PI/n))*a)/2);
    return r;
}

float R(int n, int a){
    float R=(a/(2*sin(M_PI/n)));
    return R;
}
float kwadratowa(float a,float b,float c){
    float x1,x2;
    float delta = b*b-4*a*c;
    if(delta>0){
        x1=(((-b)+ sqrt(delta))/(2*a));
        x2=(((-b)- sqrt(delta))/(2*a));
        printf("Sa 2 miejsca zerowe: %f oraz %f\n", x1, x2);
        if(a>0){
            printf("Funkcja jest rosnaca od %f do nieksonzonosci\n",-b/(2*a));
            printf("Funkcja jest malejaca od -nieskonczonosci do %f\n",-b/(2*a));
        }
        if(a<0){
            printf("Funkcja jest malejaca od %f do nieksonczonosci\n",-b/(2*a));
            printf("Funkcja jest rosnaca od -nieskonczonosci do %f\n",-b/(2*a));
        }
    }
    if(delta<0){
        printf("Brak miejsc zerowych");
        if(a>0){
            printf("Funkcja jest rosnaca od %f do nieksonczonosci\n",-b/(2*a));
            printf("Funkcja jest malejaca od -nieskonczonosci do %f\n",-b/(2*a));
        }
        if(a<0){
            printf("Funkcja jest malejaca od %f do nieksonczonosci\n",-b/(2*a));
            printf("Funkcja jest rosnajca od -nieskonczonosci do %f\n",-b/(2*a));
        }
    }
    if(delta==0){
        x1=(((-b)+ sqrt(delta))/(2*a));
        printf("Jedno miejsce zerowe: %f\n", x1);
        if(a>0){
            printf("Funkcja jest rosnaca od %f do nieksonczonosci\n",-b/(2*a));
            printf("Funkcja jest malejaca od -nieskonczonosci do %f\n",-b/(2*a));
        }
        if(a<0){
            printf("Funkcja jest malejaca od %f do nieksonczonosci\n",-b/(2*a));
            printf("Funkcja jest rosnajca od -nieskonczonosci do %f\n",-b/(2*a));
        }
    }
}
int main()
{
    // zadanie 4.1
    float x,y;
    puts("Podaj przyprostokatne: ");
    scanf("%f %f",  &x, &y);
    printf("Przeciw prostokatna: %f\n",przeciw(x,y));

    // zadanie 4.2
    for(int i = 0;i<=15;i=i+3){
        printf("Silnia z %d to %.0f\n",i,silnia(i));
    }
    wiz("Oskar Pondo", "oskar.pondo@gmail.com", "504201400");

    puts("\nPodaj moc urzadzenia i czas jego pracy: ");
    float P, t;
    scanf("%f %f", &P, &t);
    printf("%f kWh\n",energia(P,t));

    printf("Kat dla %d kata to: %.0f\n", 4,kat(4));
    printf("Kat dla %d kata to: %.0f\n", 56,kat(56));
    printf("Kat dla %d kata to: %.0f\n", 6,kat(6));

    printf("Promien okregu w %d kacie foremnym: %f\n",4, r(4,2));
    printf("Promien okregu w %d kacie foremnym: %f\n",6, r(6,2));
    printf("Promien okregu w %d kacie foremnym: %f\n",5, r(5,2));


    printf("Promien okregu na %d kacie foremnym: %f\n",5, r(5,4));
    printf("Promien okregu na %d kacie foremnym: %f\n",6, r(6,4));
    printf("Promien okregu na %d kacie foremnym: %f\n",7, r(7,4));

    puts("Podaj a b c funkcji kwadratowej: ");
    int a, b, c;
    scanf("%f %f %f",&a, &b, &c);
    kwadratowa(a,b,c);
    return 0;
}

