#include <stdio.h>

int main()
{
    int a; //int takes 4 bytes space
    int *b = &a;
    printf("Adress of int a is %u\n", b);
    *b++; //adding another int will take 4 byte more space
    printf("Adress of int a is %u\n", b);

    float fa; //float takes 4 bytes space
    float *fb = &fa;
    printf("Adress of float fa is %u\n", fb);
    *fb++; //adding another float will take 4 byte more space
    printf("Adress of float fa is %u\n", fb);

    char ca; //char takes 1 byte space
    char *cb = &ca;
    printf("Adress of char ca is %u\n", cb);
    cb++; //adding another char will take 1 byte more space
    printf("Adress of char ca is %u\n", cb);
    return 0;
}