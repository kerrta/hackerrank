#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    double pos = 0, neg = 0, zero = 0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       
        if(arr[arr_i] < 0)
            neg += 1;
        else if(arr[arr_i] > 0)
            pos += 1;
        else
            zero += 1;
    }
    
    printf("%f\n", (pos/n));
    printf("%f\n", (neg/n));
    printf("%f\n", (zero/n));
    return 0;
}