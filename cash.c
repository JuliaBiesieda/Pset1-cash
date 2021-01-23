#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        //get a positive input from user
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0.00);

    //convert dollars to cents
    float cents = round(dollars * 100);

    //create a variable that will count number of coins
    int coins = 0;

    //can we use quarters? If positive, find the leftover and add 1 coin
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }

    //can we use dimes? If positive, find the leftover and add 1 coin
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    //can we use nickels? If positive, find the leftover and add 1 coin
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    //can we use pennies? If positive, find the leftover and add 1 coin
    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }
    //print the number of coins
    printf("%i\n", coins);
}