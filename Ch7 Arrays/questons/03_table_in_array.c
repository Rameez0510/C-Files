#include <stdio.h>

int main()
{
    int table5[10];
    for (int i = 1; i < 11; i++)
    {
        table5[i-1] = i * 5;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d, " , table5[i]);
    }
    
    return 0;
}