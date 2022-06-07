#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int x = 3, y = 12, z = 25;
    printf("The average of %d, %d, %d is %f\n", x, y, z, average(x,y,z));
    return 0;
}

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}