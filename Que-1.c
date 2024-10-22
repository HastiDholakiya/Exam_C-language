//WAP to calculate the factorial of N. using do while loop.

#include <stdio.h>

int main() 
{
    int n;
    int fac=1; 
    int a=1;

    printf("Enter a number for factorial: ");
    scanf("%d", &n);

    do {
        fac *= a;
        a++;
    } while (a<=n);

    printf("Factorial of %d is: %d\n", n, fac);

}
