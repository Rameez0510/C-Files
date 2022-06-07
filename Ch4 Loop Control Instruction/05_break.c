#include <stdio.h>

int main()
{
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n", i);
        if (i==5)
        {
            break; // exit the loop
        }
        
    }
    
    return 0;
}