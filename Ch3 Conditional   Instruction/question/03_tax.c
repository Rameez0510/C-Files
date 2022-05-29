/* Tax payed to government by employee
250k - 500k 5%
500k - 1M   20%
1M+         30%*/

#include <stdio.h>

int main()
{
    float income;
    printf("Enter your income per annum in lakhs\n");
    scanf("%f", &income);

    if (income > 2.5 && income< 5.0)
    {
        printf("you have to pay 5%% of your income as income tax \n");
    }
    else if (income >= 5.0 && income < 10.0)
    {
        printf("you have to pay 20%% of your income as income tax \n");
    }
    else if (income >= 10.0)
    {
        printf("you have to pay 30%% of your income as income tax \n");
    }
    else
    {
        printf("You are very poor you dont have to pay tax");
    }
    
    
    
    return 0;
}