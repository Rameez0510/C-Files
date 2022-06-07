#include <stdio.h>
void positive(int arr[], int n){
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
            if (arr[i] >= 0)
            {
                pos++;
            }
            
    }
    printf("Number of positive numbers in this array is %d", pos);
}
int main()
{
    int num[10] = {22,-8,-95,-85,55,-45,65,-97,-91,54} ;
    positive(num, 10);
    return 0;
}