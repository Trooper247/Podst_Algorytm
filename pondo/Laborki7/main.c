#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char str[10]; // remember last one is ASCI 0 so the input size is n-1
char str2[20];
int i = 0, j = 0, n = 0;
int x, y, z, v; // znkai, slowa, przecinki, kropki
int main1() {
    puts("Podaj tekst wejsciowy: "); // beginning of 1
    fgets(str,10,stdin);
    fputs(str,stdout);
    puts("\n");

	while (str[i])
	{
		if (str[i] !=' '){
            str[j++] = str[i];
        }else{
            n++;
        }
		i++;
	}
	str[j] = '\0';
    printf("Liczba spacji: %d", n);
    puts("\n");
    fputs(str,stdout); // end od 1
    puts("\n");
    i = 0;
    j = 0,

    puts("Podaj drugi tekst wejsciowy: "); // beginning of 2
    fgets(str2,20,stdin);
    while (str2[i])
	{
		if (str[i] !=' '){
            str[j++] = str[i];
        }else{
            n++;
        }
		i++;
	}
    return 0;
}
