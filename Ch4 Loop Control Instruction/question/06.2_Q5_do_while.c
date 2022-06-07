#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    do
    {
        i++;
        n += i;
    } while (i < 10);
    
    printf("%d\n", n);
    
    return 0;
}