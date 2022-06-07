#include <stdio.h>
void address(int a);
int main()
{
    int b = 5;
    printf("The adress of b is %u\n", &b);
    address(b);
    return 0;
}

void address(int a){
    printf("The address of %d in function is %u \n", a, &a);
}