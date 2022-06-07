#include <stdio.h>

int main()
{
    int n, i;
    printf("Which table you want\n");
    scanf("%d", &n);
    for (i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n", n, i, i*n);
    }
    
    return 0;
}