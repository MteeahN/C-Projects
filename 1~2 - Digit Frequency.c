#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str[1000];
    
    scanf("%s", &str);
    
    int len = strlen(str);
    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

    for(int i = 0; i < len; i++)
    {
        if(str[i]=='0')
            zero++;
        else if(str[i] == '1')
            one++;
        else if(str[i] == '2')
            two++;
        else if(str[i] == '3')
            three++;
        else if(str[i] == '4')
            four++;
        else if(str[i] == '5')
            five++;
        else if(str[i] == '6')
            six++;
        else if(str[i] == '7')
            seven++;
        else if(str[i] == '8')
            eight++;
        else if(str[i] == '9')
            nine++;
    }

printf("%d %d %d %d %d %d %d %d %d %d", zero, one, two, three, four, five, six, seven, eight, nine);

return 0;
}
