#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
// Converts time from 12H to 24H
char* timeConversion(char* s) {
    int i, n;
    char *arr;
    // Allocates memory for the temporary string
    arr = malloc(sizeof(char) * 10);
    for(i = 0; i < 10; i++)
    {
        // Stores s in a temporary string to not alter s
        arr[i] = s[i];
        
        if(s[i] == 'P')
        {

            // Converts 1 through 7 o'clock
            if(arr[1] < '8' && arr[0] == '0')
            {
                arr[1] += 2;
                arr[0] = '1';
            }
            // Converts 8 and 9 o'clock
            else if(arr[1] >= '8')
            {
                arr[1] -= 8;
                arr[0] = '2';
            }
            // Converts 12 o'clock
            else if (arr[0] == '1' && arr[1] == '2')
            {
                ;
            }
            // Converts 10 through 11
            else    
            {
                arr[1] += 2;
                arr[0] = '2';
            }

                
        }    
            
        
    }

    // Removes the AM/PM
    arr[8] = '\0';

    return arr;

}

int main() {
    // Allocates memory for the string
    char* s = (char *)malloc(512000 * sizeof(char));
    char* result;
    // Scans in the string
    scanf("%s", s);
    // Converts time from 12H to 24H
    result = timeConversion(s);
    // Prints the result
    printf("%s\n", result);
    return 0;
}
