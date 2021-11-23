#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 3
#define m 4
int tab[n][n];
int iloczyn = 1;
int smallest;
int nieparzyste = 0;
/////////////////////
float sum;
float sumy[n];
float tab2[n][m];
float maxsum = 0;
int ind;
int main()
{
    // ZADANIE 1
    srand((unsigned int) time(NULL));
    double randMToN(double M, double N){
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;
    }

    puts("Zadanie 1\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j] = randMToN(20,-20);
            printf("%d ",tab[i][j]);
        }
        puts("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && (tab[i][j] != 0)){
                iloczyn *= tab[i][j];
            }
        }
    }
    printf("Iloczyn przekatnej nie zerowej = %d", iloczyn);

    for(int i=0;i<n;i++){
        int adres1,adres2;
        smallest = 21;
        for(int j=0;j<n;j++){
            if(tab[i][j]<smallest){
                    smallest=tab[i][j];
                    adres1=i;
                    adres2=j;
            }
        }
        puts("\n");
        printf("Najmniejsza w tym wierszu: %d o indeksie: %d, %d",smallest, adres1, adres2);
    }
    puts("\n");

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            printf("%d ",tab[i][j]);
            if(!(tab[i][j]%2))nieparzyste++;
        }
        puts("\n");
    }
    printf("Ilosc nieparzystych na przekatnej i nad nia: %d\n",nieparzyste);
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    // ZADANIE 2



    puts("Zadanie 2\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab2[i][j] = randMToN(50.00, 10.00);
            printf("%2.2f ",tab2[i][j]);
        }
        puts("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(tab2[i][j]>20)sum+=tab2[i][j];
        }
        printf("Suma w wierszu %d = %f\n", i, sum);
        sumy[i] = sum;
        sum = 0;
        puts("\n");
    }
    puts("Sumy: ");
    for(int i=0;i<n;i++)printf("%2.2f ",sumy[i]);
    puts("\nNajwieksza syuma: ");
    for(int i=0;i<n;i++){
        if(sumy[i]>maxsum){
                maxsum=sumy[i];
                ind = i;
        }
    }
    printf("%2.2f w wierszu %d",maxsum, ind);
    float bufor;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            bufor = tab[i][j];
            if (tab2[i][j]>tab2[i+1][j]){
                    tab2[i][j]=tab2[i+1][j];
                    tab2[i+1][j]=bufor;
            }
        }
    }
    puts("\nPosortowane: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%2.2f ",tab2[i][j]);
        }
        puts("\n");
    }
    return 0;
}
