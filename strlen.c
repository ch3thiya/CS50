#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("After: %c", s[i] - 32);
        }
        else
        {
            printf("After: %c", s[i]);
        }
    }
    printf("\n");
}
