#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    for (i = 0; i < 11; i++)
    {
        n += i;
    }
    
    printf("%d\n", n);
    
    return 0;
}