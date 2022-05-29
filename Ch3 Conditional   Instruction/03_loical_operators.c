#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a \n");
    scanf("%d", &a);
    
    printf("Enter number b \n");
    scanf("%d", &b);

    if (a%2 == 0 && b %2 == 0) // && used just as "and" in python i.e. when both are true then only it will executed
    {
        printf("Both a and b are even numbers\n");
    }
    
    if (a%2 == 0 || b %2 == 0) // || used just as "or" in python i.e. when either one of them is true then only it will executed
    {
        printf("Either one/ both of a and b is/are even numbers\n");
    }

    if (!(a%2 == 0)) // ! used just as "not" in python i.e. true will become false and false will become true
    {
        printf("Both a is odd numbers");
    }
    return 0;
}