#include <stdio.h>

int main()
{
    int table[3][10];
    int m;
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            m =  2;
        }
        else if (i == 1)
        {
            m = 7;
        }
        else if (i == 2)
        {
            m = 9;
        }
        
        
        for (int j = 0; j < 10; j++)
        {
                table[i][j] = m * (j+1);
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            m =  2;
        }
        else if (i == 1)
        {
            m = 7;
        }
        else if (i == 2)
        {
            m = 9;
        }
            for (int j = 0; j < 10; j++)
            {
                    printf("%d X %d = %d\n", m, j+1, table[i][j]);
            }
            
    }
    


    return 0;
}