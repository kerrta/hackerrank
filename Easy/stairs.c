// Prints stairs with a height and width of n
int main(){
    int n, i, j, cnt; 
    // Scans n for height and width of stairs
    scanf("%d",&n);
    // Counter
    cnt = n;
    // Prints stairs with a height and width of n
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            // Spacing as the staircase is right-aligned
            if(j < cnt)
                printf(" ");
            // Step
            else
                printf("#");
        }
        
        printf("\n");
        cnt--;
    }
    
    return 0;
}