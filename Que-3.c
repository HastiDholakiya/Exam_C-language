/*Write Below Pattern Using Nested Lopp.
  1
  2 3
  4 5 6
  7 8 9 10
  1112131415
*/

#include <stdio.h>

int main() 
{
    int i, j;
    int n=1;

    for (i=1; i<=5; i++) {
        for (j=1; j<=i; j++) {
            printf("%d ",n);
            n++; 
        }
        printf("\n"); 
    }

}
