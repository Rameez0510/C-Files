#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number a \n");
    scanf("%d", &a);

    // One line statement for if else
    (a>5) ? printf("Number is greater than 5") : printf("Number is not greater then 5");
    return 0;
}