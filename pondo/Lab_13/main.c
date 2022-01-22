#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pojazd{
        char Marka[20]; //auto
        char Model[20]; //najlepszy
        int Cena; //jak dla sasiada
        int Rocznik; //Twojej mamy
        int Przebieg; //do ustalenia
    };


int main()
{
    printf("Greetings Sir Lancelot!\n");
    ////////////////////////////// ZAD 1
    FILE *plik;
    FILE *kopia;
    char tekst[20] = "Oskar Pondo";
    plik=fopen("PAIP13.txt","w");
    if(plik == NULL){
        printf("Something's not right, I can feel it...");
    }else{
        for(int i = 0;i<(sizeof tekst/sizeof *tekst);i++){
                fprintf(plik,"%c",tekst[i]);
        }
        printf("\nYour file Sir, has been written!");
    }
    fclose(plik);
    //////////// end of creating file
    plik=fopen("PAIP13.txt","r");
    int i = 0;
    char message[20];
    char bufor;
    if(plik == NULL){
        printf("\nSomething's not right, I can feel it...");
    }else{
        printf("\nReading Your letter Sir!");
        while(fscanf(plik,"%c", &bufor) != EOF){
            message[i] = bufor;
            i++;
        }
        printf("\nYour letter Sir!: \n");
    }
    fclose(plik);

    for(int i = 0; i<20;i++){
        printf("%c", message[i]);
    }

    kopia=fopen("PAIP13_KOPIA.txt","w");
    if(kopia == NULL){
        printf("\nSomething's not right, I can feel it...");
    }else{
        puts("\nRewriting Your letter Sir!");
        for(int i = 0;i<(sizeof message/sizeof *message);i++){
                fprintf(kopia,"%c",message[i]);
        }
        printf("\nYour Letter Sir, has been written!");
    }
    fclose(kopia);

    //////////////////////////////ZAD 2

    struct pojazd autko;
    strcpy(autko.Marka,"Ford");
    strcpy(autko.Model,"Fiesta");
    autko.Cena = 2137;
    autko.Rocznik = 1996;
    autko.Przebieg = 450000;

    FILE *zlom;
    zlom = fopen("Wykaz_z_zlomowiska.txt","w");

    if(zlom == NULL){
        printf("\nSomething's not right, I can feel it...");
    }else{
            fprintf(zlom,"Marka: %s\n",autko.Marka);
            fprintf(zlom,"Marka: %s\n",autko.Marka);
            fprintf(zlom,"Model: %s\n",autko.Model);
            fprintf(zlom,"Cena: %d\n",autko.Cena);
            fprintf(zlom,"Rocznik: %d\n",autko.Rocznik);
            fprintf(zlom,"Przebieg: %d\n",autko.Przebieg);
    }
    fclose(zlom);
    ///////////////////////////////////ZAD 3
    FILE *zlomy;
    struct pojazd autka[3];
    zlomy = fopen("Wykaz_z_zlomowisk.txt","w");
    for(int i = 0;i<3;i++){
        strcpy(autka[i].Marka,"Ford");
        strcpy(autka[i].Model,"Fiesta");
        autka[i].Cena = 2137;
        autka[i].Rocznik = 1996;
        autka[i].Przebieg = 450000;


        if(zlomy == NULL){
            printf("\nSomething's not right, I can feel it...");
        }else{
                fprintf(zlomy,"Marka: %s\n",autka[i].Marka);
                fprintf(zlomy,"Marka: %s\n",autka[i].Marka);
                fprintf(zlomy,"Model: %s\n",autka[i].Model);
                fprintf(zlomy,"Cena: %d\n",autka[i].Cena);
                fprintf(zlomy,"Rocznik: %d\n",autka[i].Rocznik);
                fprintf(zlomy,"Przebieg: %d\n",autka[i].Przebieg);
        }
    }
    fclose(zlomy);
    /////////////////////////ZAD 4
    FILE *foo;
    foo=fopen("Wykaz_z_zlomowisk.txt","r");
    int n = 0;
    char new_message[40];
    char new_bufor;
    if(plik == NULL){
        printf("\nSomething's not right, I can feel it...");
    }else{
        printf("\nReading Your zlomowisko Sir!");
        while(fscanf(foo,"%c", &new_bufor) != EOF){
                while(fscanf(foo,"%c", &new_bufor) != '\n'){
                    new_message[n] = new_bufor;
                    n++;
                }
                char *does_it = strstr(*new_message,"T");
                if(does_it)printf("Helooooooooooo");


        }
        printf("\nYour letter Sir!: \n");
    }
    fclose(plik);

    for(int i = 0; i<20;i++){
        printf("%c", message[i]);
    }

    kopia=fopen("Wykaz_z_zlomowisk.txt","w");
    if(kopia == NULL){
        printf("\nSomething's not right, I can feel it...");
    }else{
        puts("\nRewriting Your letter Sir!");
        for(int i = 0;i<(sizeof message/sizeof *message);i++){
                fprintf(kopia,"%c",message[i]);
        }
        printf("\nYour Letter Sir, has been written!");
    }
    fclose(kopia);


    return 0;
}
