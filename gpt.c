#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string number;

    // Loop to keep asking for input until the length is 10 or fewer characters
    do
    {
        number = get_string("Number: ");
    }
    while (strlen(number) > 10);

    // Check for specific conditions to determine the card type
    if (strlen(number) >= 2 && number[0] == '3' && (number[1] == '4' || number[1] == '7'))
    {
        printf("AMEX\n");
    }
    else
    {
        printf("Not Valid\n");
    }

    return 0;
}
