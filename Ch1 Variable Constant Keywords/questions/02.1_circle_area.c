// Area of a circle
#include <stdio.h>

int main()
{
    int r ;
    float pie = 3.14 ;

    printf("%f", pie);

    printf("Enter the radius of the circle \n");
    scanf("%d" , &r);

    printf("The area of circle whose radius is %dcm is %fcm sq",r , r*r*pie);

    return 0;
}