#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("Enter your mass\n");
    scanf("%f", &m);

    printf("Force exerted by earth on a %.2fKg object is %.2fN\n", m, force(m));
    return 0;
}

float force(float m){
    return m * 9.8;
}