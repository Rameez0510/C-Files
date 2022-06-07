#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number = rand()%10000 + 1;
    printf("The number is %d\n", number);
    return 0;
}