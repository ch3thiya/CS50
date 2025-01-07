#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = get_int("Size: ");
    int sequence[size];
    sequence[0] = get_int("Number: ");
    int multiply = get_int("Multiply By: ");

    for (int i = 1; i < size+1; i++)
    {
        sequence[i] = sequence[i-1] * multiply;
        printf("%i ", sequence[i-1]);
    }
    printf("\n");
}
