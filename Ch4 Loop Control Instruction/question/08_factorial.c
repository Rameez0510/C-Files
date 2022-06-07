#include <stdio.h>

int main()
{
    int i,f = 1;
    for (i = 1; i < 11; i++)
    {
        f = f*i;

    }
    printf("Factorial of numbers between 1 and 10 is %d", f);
    
    return 0;
}