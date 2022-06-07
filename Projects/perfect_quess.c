#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // Generating random number
    int number;
    srand(time(0));
    number = rand()%10*10000 + rand()%1000 + rand()%100 + rand()%10 + 1;
    // printf("%d\n", number);

    // adding no. of turns
    int turn = 0, guess;

    //creating condition for checking correct number
    while (turn != -1)
    {
        turn++;
        printf("Write the number\n");
        scanf("%d", &guess);
        
        if (guess == number)
        {
            break;
        }
        else if (guess > number)
        {
            printf("Small number plz..\n");
        }
        else if (guess < number)
        {
            printf("Big number plzz...\n");
        }
        
        
        
    }
    printf("OwO,you guessed the correct number in %d turns", turn);

    return 0;
}