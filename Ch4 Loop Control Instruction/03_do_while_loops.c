#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i+1); // execute first
        i++;
    } while (i<10); // checks after execution
    
    return 0;
}