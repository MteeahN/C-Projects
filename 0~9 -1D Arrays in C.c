#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i, sum;
    
    scanf("%d", &n);
    int res[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d ", &res[i]);
    }
    
    sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += res[i];
    }
    
    printf("%d", sum);
}
