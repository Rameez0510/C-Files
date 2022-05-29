#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);
    printf("Enter number d: ");
    scanf("%d", &d);
    
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest number\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the greatest number\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the greatest number\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is the greatest number\n", d);
    }
    
    return 0;
}