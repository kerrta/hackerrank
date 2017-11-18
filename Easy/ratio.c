#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

// Finds the ratio for negative, positive, and zero integers in an array
int main(){
    int n;
    double pos = 0, neg = 0, zero = 0; 
    // Gets the number of inputs in the array
    scanf("%d",&n);
    int arr[n];
    // Scans in the inputs into an array
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       // Count negative numbers
        if(arr[arr_i] < 0)
            neg += 1;
        // Count positive numbers
        else if(arr[arr_i] > 0)
            pos += 1;
        // Count zeros
        else
            zero += 1;
    }
    
    // Prints the ratios
    printf("%f\n", (pos/n));
    printf("%f\n", (neg/n));
    printf("%f\n", (zero/n));
    return 0;
}