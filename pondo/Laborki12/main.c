#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ziomek{
        char Imie[20];
        char Nazwisko[20];
        int Wiek;
};


struct data{
    int day;
    int month;
    int year;
};

struct student{
    int nr_albumu;
    float ocena;
};

void print_record(struct ziomek student);
void print_date(struct data x);
void print_student(struct student y);


int main()
{
    printf("Hello darkness my old friend\n");
    //////////////////////////////////////ZAD 1
    struct ziomek Person_1;
    //Student *wsk=&Person_1;

    strcpy(Person_1.Imie,"Oskar");
    strcpy(Person_1.Nazwisko, "Pondo");
    Person_1.Wiek = 22;
    print_record(Person_1);
    //////////////////////////////////////ZAD 2
    struct data data_urodzenia;
    //struct data *wsk_data=&data_urodzena;
    printf("\nWprowadz date urodzenia w fornmacie dzien miesiac rok:\n");
    scanf("%d", &data_urodzenia.day);
    scanf("%d", &data_urodzenia.month);
    scanf("%d", &data_urodzenia.year);
    print_date(data_urodzenia);
    /////////////////////////////////////ZAD 3
    struct student osoba;
    osoba.nr_albumu = 2348;
    osoba.ocena = 5.0;
    print_student(osoba);
    ////////////////////////////////////ZAD 4
    struct student osoba1[3];

    osoba1[0].nr_albumu = 2137;
    osoba1[0].ocena = 3.0;

    osoba1[1].nr_albumu = 3149;
    osoba1[1].ocena = 2.5;

    osoba1[2].nr_albumu = 7218;
    osoba1[2].ocena = 4.5;

    for(int i=0;i<3;i++){
        printf("Nr albumu: %d\n", osoba1[i].nr_albumu);
        printf("Ocena: %2.2f\n", osoba1[i].ocena);
    }
    return 0;
}

void print_record(struct ziomek student){
    printf("Imie: %s\nNazwisko: %s\nWiek: %d\n",student.Imie, student.Nazwisko, student.Wiek);

}


void print_date(struct data x){
    printf("Data urodzenia: %d %d %d\n", x.day, x.month, x.year);
}


void print_student(struct student y){
    printf("Nr albumu: %d\nOcena:%1.1f\n", y.nr_albumu, y.ocena);
}
