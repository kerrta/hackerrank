#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
// Calculates the sum of the lowest 4 numbers and the sum of the highest 4 numbers
int main() {
    int max = 0, min = 1000000000, i, arr_i, temp_max, temp_min;
    long int max_sum = 0, min_sum = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       // Finds the max
       if(arr[arr_i] > max)
           max = arr[arr_i];
       // Finds the min
       if(arr[arr_i] < min)
           min = arr[arr_i];
    }

    temp_max = max;
    temp_min = min;
    
    for(i = 0; i < 5; i++)
    {
        // Calculates min_sum
        if(arr[i] != max)
            min_sum += arr[i];
        // Just in case there are duplicates
        else
            max = temp_min - 1;
        
        // Calculates max_sum
        if(arr[i] != min)
            max_sum += arr[i];
        // Just in case there are duplicates
        else
            min = temp_max + 1;
        
    }
    
    printf("%ld %ld", min_sum, max_sum);
    
    return 0;
}