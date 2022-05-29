// 97 - 122 --> lowercase

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("%c is lowercase\n", ch);
    }
    else
    {
        printf("%c is not a lowercase\n", ch);
    }
    
    
    return 0;
}