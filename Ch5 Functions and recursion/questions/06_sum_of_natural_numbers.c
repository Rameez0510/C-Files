#include <stdio.h>
int sumOfNaturalNumbers(int n);
int main()
{
    int a = 5;
    printf("%d", sumOfNaturalNumbers(a));
    return 0;
}

int sumOfNaturalNumbers(int n){
    if (n==0)
    {
        return 0;
    }
    else
    {
       return  n + sumOfNaturalNumbers(n-1);
    }
    
    
}