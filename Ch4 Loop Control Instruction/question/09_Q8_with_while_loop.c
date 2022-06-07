#include <stdio.h>

int main()
{
    int i=1,j,f = 1;
    printf("Which factorial you want\n");
    scanf("%d", &j);
    while (i<j+1)
    {
        f *= i;
        i++;
    }
    
    printf("Factorial of numbers between 1 and 10 is %d", f);
    
    return 0;
}