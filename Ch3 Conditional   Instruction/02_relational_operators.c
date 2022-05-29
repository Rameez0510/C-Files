#include <stdio.h>

int main()
{
    int age ;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age >= 18) // relational operator used to check weather the person is above 18 or not
    {
            printf("You are above 18 and you can drive\n");
    }
    else
    {
        printf("You are below 18 and you can't drive\n");
    }

    if (age = 55)
    {
        printf("You are so old now btw\n");
    }
    else
    {
        printf("you are zero\n");
    }
    
    
    
    
    return 0;
}