#include <stdio.h>

int main()
{
    float c ;
    printf("Enter the tempreture in Celcius \n");
    scanf("%f" , &c);

    printf("When we convert %fC into farenheit its value is %fF", c, (c * 9 / 5)+32);
    return 0;
}