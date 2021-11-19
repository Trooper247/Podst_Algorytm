#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char str[20]; // remember last one is ASCI 0 so the input size is n-1
int x, y, z, v; // znaki, slowa, przecinki, kropki
int main2() {
    puts("Podaj tekst wejsciowy: ");
    fgets(str,20,stdin);
    for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == ',')z++;
        if(str[i] == '.')v++;
        if (str[i] == ' ' && str[i+1] != ' ')y++;
        if(str[i] != '\0')x++;
	}
    printf("Ilosc przecinkow: %d\nilosc kropek: %d\nIlosc slow: %d ",z, v, y);
    return 0;
}
