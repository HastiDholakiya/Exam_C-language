//Write a C program to find the largest element in an arrray.

#include <stdio.h>

int main() 
{
    int n, i; 
    int max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (i=0; i<n; i++) 
    {
        printf("Enter element: \n", n);
        scanf("%d",&arr[i]);
    }

    max = arr[0];

    for (i=1; i<n; i++) 
    {
        if (arr[i]>max) {
            max = arr[i];
        }
    }

    printf("The largest element in an array is: %d\n", max);

}
