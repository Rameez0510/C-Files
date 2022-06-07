#include <stdio.h>

int main()
{
    int a = 31;
    int *j = &a;
    int **k = &j;
    printf("The value of a is %d\n", a);
    printf("The address of a is %u\n", &a);
    printf("The value of j is %d\n", *j);
    printf("The address of j is %u\n", &j);
    printf("The value of k is %d\n", **k);
    printf("The address of k is %u\n", &k);
    printf("hello");

    return 0;
}