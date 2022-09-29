#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int ali[4] = {a, b, c, d};
    int tmp, i;

    tmp = ali[0];
    for(i = 0; i < 4; i++)
    {
        if(ali[i] > tmp)
            tmp = ali[i];
    }
    return(tmp);
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
