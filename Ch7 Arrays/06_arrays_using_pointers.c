#include <stdio.h>

int main()
{
    int marks[4];
    int *m = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d \n", i+1);
        scanf("%d", m);
        m++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Marks of student %d is %d\n", i+1, marks[i]); 
    }
    
    
    return 0;
}