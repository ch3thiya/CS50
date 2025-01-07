#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string full_name = get_string("What is your full name?\n ");
    int age = get_int("How old are you?\n ");
    string number = get_string("What is your contact number?\n ");

    printf("Name: %s\n ", full_name);
    printf("Age: %i\n ", age);
    printf("Number: %s\n ", number);
}
