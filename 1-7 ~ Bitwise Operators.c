#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int AND = 0;
    int OR = 0;
    int XOR = 0;
    
    for(int i = 1; i <= k; ++i)
    {
        for(int j = (i + 1); j <= n; ++j)
        {
            if((i & j) < k && (i & j) > AND)
            {
                AND = (i & j);
            }
            if((i | j) < k && (i | j) > OR)
            {
                OR = (i | j);
            }
            if((i ^ j) < k && (i ^ j) > XOR)
            {
                XOR = (i ^ j);
            }
        }
    }
    printf("%d\n%d\n%d\n", AND, OR, XOR);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
