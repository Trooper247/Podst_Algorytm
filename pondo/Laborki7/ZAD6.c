#include <stdio.h>
#include <ctype.h>
#include <string.h>

char str[20];
char abc[37] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?1234567809";
char num[10] = "1234567890";
int n;
int main() {
    puts("Podaj tekst wejsciowy");
    fgets(str,19,stdin);
    puts("Podales: ");
    puts(str); // test input" adam123.,.,
    for(int i=0;str[i] != '\0';i++){
        str[i]=toupper(str[i]);
        for(int j=0;num[j] != '\0';j++){
            if(str[i] == num[j])str[i]='?';
        }
        printf("%c",str[i]);
    }
    puts("\n");
    for(int i=0;str[i] != '\0';i++){
        for(int k=0;abc[k] != '\0';k++){
            if(str[i] == '?')puts("jest cyfra");
            if(str[i] == abc[k]){
                n=1;
                puts("jest w abc\n");
            }
        }
        if(n==0)str[i]='#';
        n=0;
    }
    for(int i=0;str[i] != '\0';i++)printf("%c ", str[i]);
    return 0;
}
