#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char str[10];
char rev[10];
int main4() {
    puts("Podaj tekst: ");
    scanf("%s", str);
    puts("\nPodales: ");
    puts(str);
    puts("\nA odwrotnie to: ");
    for(int i=0;i<10;i++){
        rev[(9-i)] = toupper(str[i]);
    }
    for(int i=0;i<10;i++){
        printf("%c",rev[i]);
    }

    return 0;
}
