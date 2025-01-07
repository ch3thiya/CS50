#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main()
{
    string number = get_string("Number: ");

    int sum1 = 0;
    int sum2 = 0;
    int len = strlen(number);

    for (int i = len-2; i >= 0; i-=2)
    {
        int digit = number[i] - '0';
        int mlt = digit * 2;
        if (mlt > 9)
        {
            mlt = (mlt % 10) + 1;
        }
        sum1 += mlt;
    }
    for (int i = len-1; i >= 0; i-=2)
    {
        int digit = number[i] - '0';
        sum2 += digit;
    }

    int sum3 = (sum1 + sum2);
    if (sum3 % 10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
