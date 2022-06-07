#include <stdio.h>

int main()
{
    int i = 0;
    while (i<10)
    {
        i++;
        if (i == 5 || i == 8) // if i is 5 or 8 it will jump to the next loop
        {
            continue;
        }
        printf("%d", i);
        
    }
    
    return 0;
}