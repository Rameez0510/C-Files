#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    while (i<10)
    {
        i++;
        n = n + i;
    }
    printf("%d\n", n);
    
    return 0;
}