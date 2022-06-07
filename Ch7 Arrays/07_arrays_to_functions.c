#include <stdio.h>
void printArray(int *ptr, int n){ // both method accepted
    for (int i = 0; i < n; i++)
    {
        printf("The value of array %d is %d\n", i+1, *(ptr+i));
    }
    ptr[2] = 53;
    
}
void printArray2(int ptr[], int n){ // both method accepted
    for (int i = 0; i < n; i++)
    {
        printf("The value of array %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 53;
    
}
int main()
{
    int arr[] = {5,10,15,20,25,30,35} ; 
    printArray(arr, 7);
    printf("%d", arr[2]);

    printArray2(arr, 7);
    return 0;
}