#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main1()
{

    int p = 0;
    int n = 0;

    srand((unsigned)time(NULL));

    double table1[10];
    double positive[10];
    double negative[10];
    double max_pos=0;
    double ilocz_neg=1;

    double randMToN(double M, double N){
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;
    }

    for(int i=0;i<10;i++){
        table1[i] = randMToN(70,-30);
    }



    for(int i=0;i<10;i++){
        printf(" %3.4f",table1[i]);
    }
    for(int j=0; j<10;j++){
        if (table1[j] > 0){
            positive[p]=table1[j];
            p=p+1;
        }else{
            negative[n]=table1[j];
            n=n+1;
        }
    }
    printf("\n\n");

    for(int i=0;i<p;i++){ // positives
        printf(" %3.3f",positive[i]);
    }

    printf("\n\n");

    for(int i=0;i<n;i++){ // negatives
        printf(" %3.3f",negative[i]);
    }

    for(int i=0;i<p;i++){ // max positive
        if (positive[i] > max_pos){
            max_pos = positive[i];
        }
    }
    printf("\nMaksymalna wartosc dodatnia: %f ",max_pos);

    for(int i=0;i<n;i++){ // iloczyn negatywnych
        ilocz_neg = (ilocz_neg * negative[i]);
    }
    printf("\nIloczyn wartosci ujemnych: %f\n",ilocz_neg);


    int ok = 0;
    double next;
    while(ok == 0){
        for(int i=0;i<p;i++){//organize
            next = positive[(i+1)];
            if(positive[i]>positive[(i+1)]){
                positive[(i+1)] = positive[i];
                positive[i] = next;
                for(int n =0;n<p;n++){
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (positive[n]+10));
                    printf("%f ",positive[n]);
                }
                printf("\n");
            }
        }
        ok = 1;
        for(int x=0;x<p;x++){
            if(positive[x]>positive[(x+1)]){
                ok = 0;
            }
        }//verify if is in order
    }
    return 0;

}


