#include <stdio.h>

int main()
{
    int n,i,a=0;
    printf("Enter a number to check weather it is prime or not\n");
    scanf("%d", &n);
    printf("Please wait we are checking........\n\n");
    for (i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            a = 1;
            break;
        }
        
    }
    if (a == 1)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
    
    
    
    return 0;
}