#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{

    int p = 0;
    int n = 0;

    srand(time(NULL));

    double table1[10];
    double positive[10];
    double negative[10];
    double max_pos=0;
    double ilocz_neg=1;

    for(int i=0;i<10;i++){
        table1[i]=(double)((rand()%71)-30);
    }
    for(int i=0;i<10;i++){
        printf(" %3.3f",table1[i]);
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
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (positive[n]+2));
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
// malok for memory alocation
/*
double sort(double array, double size)
{
    //int size;
    double next;
    //printf("Please provide the size of a random array: ");
    //scanf("%d",&size);
    //int tab[size];
    //size= sizeof tab / sizeof tab[0];
    //srand(time(NULL));
    //for(int i=0;i<size;i++){
    //  tab[i] = rand()%10;
    //}
    //for(int i =0;i<size;i++){
    //    printf("%d ",tab[i]);
    //}
    //printf("\n");

    int ok = 0;
    while(ok == 0){
        for(int i=0;i<size;i++){//organize
            next = array[(i+1)];
            if(array[i]>array[(i+1)]){
                array[(i+1)] = array[i];
                array[i] = next;
                for(int n =0;n<size;n++){
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (array[n]+2));
                    printf("%d ",array[n]);
                }
                printf("\n");
            }

        }
        ok = 1;
        for(int x=0;x<size;x++){
            if(array[x]>array[(x+1)]){
                ok = 0;
            }
        }//verify if is in order
    }



    return 0;
}
*/
