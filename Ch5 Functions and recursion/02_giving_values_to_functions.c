#include <stdio.h>

int sum(int a, int b);

int main()
{
    int c;
    c = sum(15,20);
    printf("The sum is %d", c);
    return 0;
}

int sum(int a, int b){
    int result = a + b;
    return result;
}