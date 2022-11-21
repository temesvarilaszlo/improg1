#include <stdio.h>
#include "list.h"

#define SQUARE(n) n * n
#define PLUS(a,b) (a + b)

int main()
{
    int i = 5;
    printf("%i\n", SQUARE(i++));
    printf("%i\n", SQUARE(i));

    printf("%i\n", PLUS(1,2));

    Node* first = init_node(42);

    list_append(first, 43);
    list_append(first, 69.420);
    list_append(first, 43);
    list_append(first, 42);

    list_print(first);

    list_remove_all(first, 43);

    list_print(first);

    list_remove_one(first, 42);

    list_print(first);

    free_list(first);
}