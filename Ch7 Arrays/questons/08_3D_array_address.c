#include <stdio.h>

int main()
{
    int threeD[30][40][50] ;
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            for (int k = 0; k < 50; k++)
            {
                printf("The address of threeD[%d][%d][%d] is %d \n", i, j, k, &threeD[i][j][k]);
            }
            
        }
        
    }
    float size = (&threeD[29][39][49] - &threeD[0][0][0])/1000.0;
    printf("Memory used is RAM is %.3f kb", size);
    return 0;
}