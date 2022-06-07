// 0,1,1,2,3,5,8,13
// (0),(1),(0+1=1),(1+1=2),(2+1=3),(3+2=5)

#include <stdio.h>
int fibonacci(int f);
int main()
{
    printf("%d", fibonacci(10));
    return 0;
    // printf("helo");

}

int fibonacci(int f){
    if (f==0)
    {
        // printf("%d " , 0);
    }
    else{
        int fib = fibonacci(f-1) + fibonacci(f-2);
        printf("%d ", fib );
    }
}