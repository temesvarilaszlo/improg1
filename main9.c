#include <stdio.h>
#include <stdlib.h>

#include "my_map.h"

int main()
{
    /*
    int size;
    scanf("%i", &size);

    char* name = (char*)malloc(size + 1);

    scanf("%s", name);

    printf("%s\n", name);

    free(name);
    */
    //--------------------------------------

    my_map m = my_init();

    my_insert(&m, "alma", 42);
    my_insert(&m, "barack", 69);
    my_insert(&m, "fasz", 420);
    my_insert(&m, "nemtom", 42069);
    my_insert(&m, "nem", 69420);

    print_map(&m);

    my_deinit(&m);
}