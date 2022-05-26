// Area of a cyllender
#include <stdio.h>

int main()
{
    int r, h ;
    float pie = 3.14 ;

    

    printf("Enter the radius of the cyllender \n");
    scanf("%d" , &r);
    
    printf("Enter the height of the cyllender \n");
    scanf("%d" , &h);

    printf("The area of cyllender whose radius is %dcm and height is %dcm is %fcm sq",r , h, r*r*pie*h);

    return 0;
}