#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, tmp;
    
    scanf("%d", &num);
    int arr[num];
    
    for(i = 0; i < num; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < (num / 2); i++)
    {
        tmp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = tmp;
    }
    
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);  
    }
}
