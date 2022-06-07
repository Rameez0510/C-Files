#include <stdio.h>

int main()
{
    int t;
    printf("Enter a number\n");
    scanf("%d", &t);
    
    int table5[10];
    for (int i = 1; i < 11; i++)
    {
        table5[i-1] = i * t;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", t, i+1 , table5[i]);
    }
    
    return 0;
}