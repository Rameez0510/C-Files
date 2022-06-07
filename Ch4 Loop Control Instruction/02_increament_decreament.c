#include <stdio.h>

int main()
{
    int i = 10;
    printf("%d\n" , i++);// i will print first then value will increase
    printf("%d\n", i);

    printf("%d\n", ++i); // i will first increase then print i
    return 0;
}