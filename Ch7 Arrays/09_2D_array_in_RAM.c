#include <stdio.h>

int main()
{
    int marks[2][2] = {
        {1,6},
        {2,8}
        };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Adress of marks[%d][%d] is %u\n",i, j,  &marks[i][j]);
        }
        
    }
    
    
    
    return 0;
}