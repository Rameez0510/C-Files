#include <stdio.h>

int main()
{
    float p, r, t;
    printf("Enter principle \n");
    scanf("%f", &p);
    printf("Enter rate \n");
    scanf("%f", &r);
    printf("Enter time \n");
    scanf("%f", &t);

    printf("Simple interest is Rs.%f only", (p*r*t)/100);
    
    return 0;
}