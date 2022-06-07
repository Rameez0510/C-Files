#include <stdio.h>
int sum(int a, int b);
float average(int a, int b);
int main()
{
    int x = 5, y = 8;
    printf("The sum of %d and %d is %d\n", x, y, sum(x , y));
    printf("The average of %d and %d is %.2f\n", x, y, average(x , y));
    int s = sum(x, y );
    printf("The address of sum is %u\n", &s);
    s = average(x, y );
    printf("The address of sum is %u\n", &s);
    return 0;
}

int sum(int a, int b){
    int addition = a + b;
    return addition;
}

float average(int a, int b){
    float mean = (a+b)/2.0;
    return mean;
}