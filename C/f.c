/*
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

5
5 4
5 4 3
5 4 3 2
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("Enter number: ");
    scanf("%d", &n);
  	// Complete the code to print the pattern
    int i,j,k;
    
    for(i=n ; i>=1 ; i--)
    {   
        for(j=n ; j>i ; j--)
        printf("%d ",j);

        for(j=1 ; j<=2*i-1 ; j++){
        printf("%d " , i);
        }
        for(j=i+1 ; j<=n ; j++)
        printf("%d ",j);
        printf("\n");
    }

    for(i=1 ; i<=n ; i++)
    {
        for(j=n ; j>i ; j--)
        printf("%d " ,j);

        for(j=1 ; j<=2*i-1 ; j++)
        printf("%d " , i+1);

        for(j=i+1 ; j<=n ; j++)
        printf("%d ",j);


        printf("\n");
    }
    
    return 0;
}
