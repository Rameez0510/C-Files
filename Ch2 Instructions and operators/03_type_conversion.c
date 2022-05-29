#include <stdio.h>

int main()
{
    printf("%d\n", 5/2); // returns 2
    printf("%f\n", 5/2); // returns 0 cuz both are int
    printf("%f\n", 5.0/2); // returns 2.5

    return 0;
}