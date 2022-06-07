#include <stdio.h>
void display(); // Function protocol

int main()
{
    printf("Function is intialising\n");
    display(); // Function call
    printf("Function finished\n");
    return 0;
}

void display(){ // function define
    printf("this is display\n");
}