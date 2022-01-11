#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
        char *Imie;
        char *Nazwisko;
        int Wiek;
    }Osoba;

void poka(wsk);

typedef struct{
    int day;
    int month;
    int year;
}data;


int main()
{
    printf("Hello darkness my old friend!\n");
    Osoba Person_1;
    Osoba *wsk=&Person_1;
    wsk->Imie = "Oskar";
    wsk->Nazwisko = "Pondo";
    Person_1.Wiek = 22;
    poka(wsk);
    //////////////////////////////////////ZAD 2
    data data_urodzena;
    data *wsk_data=&data_urodzena;
    scanf()

    return 0;
}
void poka(Osoba *wsk){
    printf("Imie: %s\nNazwisko: %s\nWiek: %d", wsk->Imie, wsk->Nazwisko, wsk->Wiek);

}


