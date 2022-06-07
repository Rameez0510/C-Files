#include <stdio.h>
void wrong_swap(int x , int y);
void swap(int *x, int *y);
int main()
{
    int x = 5, y = 7;
    printf("Value of x and y before swap is %d and %d\n", x, y);
    swap(&x, &y);
    printf("Value of x and y after swap is %d and %d\n", x, y);
    return 0;
}

void wrong_swap(int x , int y){
    int temp = x;
    x = y;
    y = temp;
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}