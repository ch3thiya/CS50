#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string word = get_string("Enter a word: ");
    int length = strlen(word);
    for (int i = 0; i < length; i++ )
    {
         int letter = (int)word[i];
         if ( (96 < letter) && (letter < 123) )
         {
            int phrase = letter-32;
            printf("%c", phrase);
         }
         else
         {
            int phrase = letter;
            printf("%c", phrase);
         }
    }
    printf("\n");
}
