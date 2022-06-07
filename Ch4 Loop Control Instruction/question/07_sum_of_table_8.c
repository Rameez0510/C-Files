#include <stdio.h>

int main()
{
    int n = 8, sum;
    for (int i = 0; i < 11; i++)
    {
        sum += n*i;
    }
    printf("%d", sum);
    
    return 0;
}