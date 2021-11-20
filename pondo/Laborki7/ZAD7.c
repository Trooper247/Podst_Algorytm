#include <stdio.h>
#include <stdlib.h>


char str[20];
int n; // przesuniêcie
int main7() {
    puts("Podaj tekst do szyfrowania: ");
    fgets(str,20,stdin);
    puts("\nPodaj wartosc klucza: ");
    scanf("%d",&n);
    puts(str);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = (str[i] - n);
    }
    puts(str);
    return 0;
}

