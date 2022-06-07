#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    printf("%u\n", &ptr);
    // ptr += 2;
    printf("%u\n", &ptr+2);
    printf("Value of ptr after 2 kadam aage %d\n", *ptr);
    return 0;
}