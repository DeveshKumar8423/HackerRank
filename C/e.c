//Sum of digits of a five digit number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n , sum=0 , digit;
    int len = 0;
    scanf("%d", &n);
    
    while(n!=0){
        n = n/10;
        len+=1;
    }
    
    for (int i=1 ; i<=len ; i++){
        digit = n%10;
        sum = sum+digit;
        n = n/10;
    }
    
    printf("%d",sum);
    
    return 0;
}
