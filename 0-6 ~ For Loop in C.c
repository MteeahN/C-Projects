#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    
  	char x[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
      
    while(a <= b)
    {
        if(a <= 9)
        {
            printf("%s\n", x[a - 1]);
        }
        else
        {
            if(a % 2 == 0)
                printf("even\n");
            else 
                printf("odd\n");
        }
        a++;
    }

    return 0;
}

