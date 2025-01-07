#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *n = malloc(sizeof(node));

    if(n!=NULL)
    {
        n -> number = 1;
    }

    node *n2 = malloc(sizeof(node));

    if(n2!=NULL)
    {
        n2 -> number = 2;
    }

    n -> next = n2;
    n2 -> next = NULL;

    printf("%i\n", n->number);
    printf("%i\n", n2->number);
    return 0;
}
