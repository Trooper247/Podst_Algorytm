#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define size 10
double table1[size];
double avg;
int n=0;
int main(){
    srand((unsigned)time(NULL));

    double randMToN(double M, double N){
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;
    }

    for(int i=0;i<size;i++){
        table1[i] = randMToN(50,-50);
    }
    for(int i=0;i<size;i++){  // b
        printf("%3.4f ",table1[i]);
        avg+= table1[i];
    }
    printf("\nAverage value = %f\n",avg/size);
    for(int i=0;i<size;i++){  // c,d
        if(table1[i] >= (-20.0) && table1[i] <= 0.0){
                table1[i] = -1.0;
                n++;
        }
        if(table1[i] >= 5.0 && table1[i] <= 25.0){
                table1[i] = 1.0;
                n++;
        }
    }
    double table2[n];
    avg = 0;
     for(int i=0;i<size;i++){  // e,f
        printf("%f ",table1[i]);
        avg+= table1[i];
    }
    printf("\nSum of elements: %f\nNew average value = %f\n",avg,avg/size);
    int x = 0;
    for(int i=0;i<size;i++){ // g
        if((table1[i] != 1) && (table1[i] != (-1))){
            table2[x] = table1[i];
            printf("%f ",table2[x]); // h
            x++;
        }
    }
    //sorting
    printf("\n %d",n);
    printf("\nSorting: \n");
    double temp = 0.0;
    for(int i=(x+1);i>=0;i--){
        for(int j=0;j<((x+1)-i);j++){
            if(table2[j]<table2[j+1]){
                temp=table2[j];
                table2[j]=table2[j+1];
                table2[j+1]=temp;
            }
            for(int i=0;i<(size-n);i++){
                printf("%f ",table2[i]);
            }
            printf("\n");
        }
    }


    return 0;
}
