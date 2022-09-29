#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int a = (n * 2) - 1;
    int num[a][a];
    int c = a;
    int e = 0;
    int f = a;
    int d = 0;
    
    while (d < n)
    {   //Ust - Alt
        for (int i = 0; i < f; i++)
        {
            num[d][i + d] = n - d;
            num[(a - d) - 1][i + d] = n - d;
        }
        f = f - 2;
        d++;
    }
    
    d = 0;
    f = a;
    
    while (d < n)
    {
        //Sag - Sol
        for (int i = 0; i < f; i++)
        {
            num[i + d][d] = n - d;
            num[i + d][(a - d) - 1] = n - d;
        }
        f = f - 2;
        d++;
    }
    
    num[a / 2][a / 2] = 1;
   
    int x = 0;
    
    while (x < a)
    {
        for (int i = 0; i < a; i++)
            printf("%d ", num[x][i]);
        printf("\n");
        x++;
    }
        
    return 0;
}
