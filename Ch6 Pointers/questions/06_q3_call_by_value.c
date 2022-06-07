#include <stdio.h>
void tenTimes(int n);
int main()
{
    int a = 50;
    tenTimes(a);
    // printf("%d\n", a);
    return 0;
}

void tenTimes(int n){
    n = n * 10;
    printf("10 times this number is %d\n", n);
}