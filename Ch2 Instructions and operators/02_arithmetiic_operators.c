#include <stdio.h>
#include <math.h>

int main()
{
    int b = 2, c = 3;
    int z = 2 * 3; //multiplication operator used
    printf("%d \n", z);

    int x = 10, y = 3;
    printf("The sum of x and y is %d\n", x + y); 
    printf("The differnce of x and y is %d\n", x - y);
    printf("The product of x and y is %d\n", x * y);
    printf("The quotiont of x and y is %d\n", x / y);
    printf("The remainder of x and y is %d\n", x % y);
    printf("%f", pow(x,y)); //math library included for using exponents
    return 0;
}