#include <stdio.h>
#include <stdlib.h>



char str[20];
int x=0,y=21; // if, pozycja
int main5() {
    puts("Podaj tekst wejsciowy: ");
    fgets(str,20,stdin);
    puts(str);
    for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == 'i' && str[i+1] == 'f'){
            x++;
            if(y==21)y = i;
        }
    }
    printf("Ilosc wystapien if: %d , pierwsze wsytapienie na pozycji: %d",x, y);
    return 0;
}
