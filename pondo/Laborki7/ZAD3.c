#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int x;
int i;
char str[10];
int main3() {
    puts("Podaj liczbe calkowita: ");
    scanf("%d", &x);
    printf("x=%d\n",x);
    sprintf(str,"%d", x);
    while(str[i]){
        printf("%c ",str[i]);
        i++;
    }
    puts("\n");
    i=0;
    while(str[i]){
        switch(str[i]){
            case '0':
                puts("zero ");
                break;
            case '1':
                puts("jeden ");
                break;
            case '2':
                puts("dwa ");
                break;
            case '3':
                puts("trzy ");
                break;
            case '4':
                puts("cztery ");
                break;
            case '5':
                puts("piec ");
                break;
            case '6':
                puts("czesc ");
                break;
            case '7':
                puts("siedem ");
                break;
            case '8':
                puts("osiem ");
                break;
            case '9':
                puts("dziewiec ");
                break;
        }
        i++;
    }
    return 0;
}
