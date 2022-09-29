#include <stdio.h>

void update(int *a,int *b) 
{
    int pa, pb;

    pa = *a + *b;
    pb = *a - *b;
    
    if(pb < 0)
        pb *= -1;
    *a = pa;
    *b = pb;
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
