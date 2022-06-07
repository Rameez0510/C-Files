#include <stdio.h>

int main()
{
    int i = 5;
    int *j = &i;
    int **k = &j;

    printf("The value of i point to j point to k is %d\n", **k);
    return 0;
}