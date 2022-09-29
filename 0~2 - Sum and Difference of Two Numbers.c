#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b, x, y;
    float c, d, z, w;
    
    scanf("%d %d", &a, &b); 
    
    x = a + b;
    y = a - b;
       
    printf("%d %d\n", x, y);
    
    scanf("%f %f", &c, &d);
    
    z = c + d;
    w = c - d;
    
    printf("%.1f %.1f", z, w);
    
    return 0;
}
