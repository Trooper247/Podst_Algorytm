#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct ksiazka{
    char autor[40];
    char tytul[100];
    int rok;
    int cena;
};


int main()
{
    printf("Witam serdecznie Pana Doktora!\n\n\n\n");

    /////////////////////// ZAD 1
    struct ksiazka book[3];
    strcpy(book[0].autor,"James Webb");
    strcpy(book[0].tytul,"Fale kosmiczne");
    book[0].rok = 1999;
    book[0].cena = 200;

    strcpy(book[1].autor,"Adam Driver");
    strcpy(book[1].tytul,"Ja i moje problemy z wujkiem o supermocach z Alzheimerem");
    book[1].rok = 2012;
    book[1].cena = 150;

    strcpy(book[2].autor,"Henry Ford");
    strcpy(book[2].tytul,"Przebieg do ustalenia- czyli sztuka handlu");
    book[2].rok = 1956;
    book[2].cena = 2500;
    /////////////////////ZAD 2
    FILE *pliczek;
    pliczek = fopen("spis50825.txt","w");
    if(pliczek == NULL){
            printf("\nSomething's not right, I can feel it...");
    }else{
        printf("Zapisuje dziela wspaniale do spisu, Pyrokarze....\n");
        Sleep(3000);
        for(int i = 0;i<3;i++){
            fprintf(pliczek,"Autor: %s\n",book[i].autor);
            fprintf(pliczek,"Tytul: %s\n",book[i].tytul);
            fprintf(pliczek,"Rok: %d\n",book[i].rok);
            fprintf(pliczek,"Cena: %d\n",book[i].cena);
        }
        printf("Spis skonczony Mistrzu!\n");
        Sleep(4000);
    }
    fclose(pliczek);
    ////////////////////////////ZAD 3
    int najtaniej(){
        int lowest_price = book[0].cena;
        for(int i = 0;i<3;i++){
            printf(".");
            Sleep(3000);
            if (book[i].cena < lowest_price){
                lowest_price = book[i].cena;
            }
        }
        return lowest_price;
    }

    printf("Jakis czas pozniej...\n");
    Sleep(1000);
    printf("Po ile macie najtaniej te manuskrypty?\n");
    Sleep(1000);
    printf("Juz sprawdzam\n");
    printf("\nNajtanszy zwoj bedzie po %d sztuk zlota\n", najtaniej());
    Sleep(5000);
    printf("To ja podziekuje, bywaj w zdrowiu!");

    return 0;
}
