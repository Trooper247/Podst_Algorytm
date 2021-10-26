#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    int size;
    int next;
    printf("Please provide the size of a random array: ");
    scanf("%d",&size);
    int tab[size];
    //size= sizeof tab / sizeof tab[0];
    srand(time(NULL));
    for(int i=0;i<size;i++){
        tab[i] = rand()%10;
    }
    for(int i =0;i<size;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");

    int ok = 0;
    while(ok == 0){
        for(int i=0;i<size;i++){//organize

            next = tab[(i+1)];
            if(tab[i]>tab[(i+1)]){
                tab[(i+1)] = tab[i];
                tab[i] = next;
                for(int n =0;n<size;n++){
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (tab[n]+2));
                    printf("%d ",tab[n]);
                }
                printf("\n");
            }

        }
        ok = 1;
        for(int x=0;x<size;x++){
            if(tab[x]>tab[(x+1)]){
                ok = 0;
            }
        }//verify if is in order
    }



    return 0;
}




