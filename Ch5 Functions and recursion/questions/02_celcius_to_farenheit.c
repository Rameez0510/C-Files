#include <stdio.h>
float farenheit(float c);
int main()
{
    float c = 38;
    printf("%fF", farenheit(c));
    return 0;
}

float farenheit(float c){
    return ("%f", ((c*(9/5.0))+ 32)); // c* 9/5 + 32
}