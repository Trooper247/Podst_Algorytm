#include <stdio.h>
#include <stdlib.h>


int factorial(int num);

int main()
{
    printf("Greetings Traveler!\n");

    int x;
    puts("Insert decimal for factorial: ");
    scanf("%d", &x);

    printf("Factorial of %d is %d\n", x, factorial(x)); // silnia
    return 0;

}


int factorial(int num){
    if (num == 0) return (1);
    else return (num * factorial(num - 1));
}

