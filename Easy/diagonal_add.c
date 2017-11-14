#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, prim = 0, sec = 0, diff; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
          
          if(a_i == a_j)
          {
              prim += a[a_i][a_j];
          }
          
          if((a_i + a_j) == (n-1))
          {
              sec += a[a_i][a_j];
          }
       }
    }
    
    diff = abs(prim - sec);
    
    printf("%d", diff);
    
    return 0;
}