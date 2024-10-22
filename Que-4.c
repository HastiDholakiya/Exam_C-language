// C Program to print convert feet to meter.

#include <stdio.h>

int main() 
{
    float feet, meters;
    
    printf("Enter the value in feet: ");
    scanf("%f", &feet);
    
    meters = feet * 0.3048;
    
    printf("%f feet is equal to %f meters.\n", feet, meters);
    
}

