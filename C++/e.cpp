//Reverse of Array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i;
    scanf("%d", &n);
    
    vector<int> arr(n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    vector<int> rev(n);
    int j = 0;  
    for(i = n - 1; i >= 0; i--){  
        rev[j] = arr[i];  
        j++;  
    } 
    
    for(i = 0; i < n; i++){  
        printf("%d ", rev[i]);  
    }  
    return 0;
}
