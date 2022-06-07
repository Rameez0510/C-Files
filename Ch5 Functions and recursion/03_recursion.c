#include <stdio.h>

int factorial(int x);

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    printf("Factorial of %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Value of x is %d\n", x);
    if (x == 1 || x==0 )
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1); // calling itself
    }
    
    
}