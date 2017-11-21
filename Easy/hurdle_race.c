#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*
  Dan is playing a video game in which his character competes in a hurdle race by jumping over  
  hurdles with heights. He can initially jump a maximum height of units, but he has an 
  unlimited supply of magic beverages that help him jump higher! Each time Dan drinks a magic 
  beverage, the maximum height he can jump during the race increases by unit.

*/
int main(){
    int n, k, max = 0, result = 0; 
    // Takes in number of hurdles and max height the hurdler can jump
    scanf("%d %d",&n,&k);
    // Allocates memory for the array of hurdle heights
    int *height = malloc(sizeof(int) * n);
    // Stores inputs into the hurdle height array
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
       // Finds the max hurdle height
       if(height[height_i] > max)
           max = height[height_i];
    }
    // Calculates how many potions the hurdler needs to complete the race
    if(k < max)
        result = max - k;
    printf("%d", result);
    return 0;
}
