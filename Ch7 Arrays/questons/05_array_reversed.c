#include <stdio.h>
void reverse(int *ptr, int n){
    //creating a temporary array
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = ptr[i];
    }
    int k = n;
    for (int i = 0; i < n; i++)
    {
        k--;
        ptr[i] = temp[k];
        
    }
    for (int i = 0; i < n; i++)
    {
            printf("%d, ", ptr[i]);
    }
    
    
}
int main()
{
    int arr[7] = {10,25,15,30,45,55,42};
    reverse(arr, 7);
    return 0;
}