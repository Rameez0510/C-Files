#include <stdio.h>

int main()
{
    // Declaring variables
    int a;
    float b;

    // Other variation
    int i = 10; int j = i; int k = 2;
    int ji = k + j - i;
    printf("%d\n", ji);

    i = 21; //value can be changed of variable
    printf("%d\n" , i); 

    // giving same value to many variables
    int p, q, r, s;
    p = q = r = s = 30;

    printf("Value of p is %d\n", p);
    printf("Value of q is %d\n", q);
    printf("Value of r is %d\n", r);
    printf("Value of s is %d\n", s);
    return 0;
}