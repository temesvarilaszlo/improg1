#include <stdio.h>
#include <stdlib.h>

#include "my_map.h"

my_map my_init()
{
    my_map map;
    map.capacity = 1;
    map.size = 0;
    map.inner_arr = (my_pair*)malloc(sizeof(my_pair));

    printf("Map initialized.\n");
    return map;
}

void my_deinit(my_map* map)
{
    map -> capacity = 0; // (*map).capacity
    map -> size = 0;
    
    free(map -> inner_arr);
    printf("Map deinitialized.\n");
}

void my_insert(my_map* map, char* key, int value)
{
    while (map -> capacity <= map -> size){
        map -> capacity *= 2;
        map -> inner_arr = realloc(map -> inner_arr, map -> capacity * sizeof(my_pair));

        printf("Map reallocated with new capacity: %i\n", map -> capacity);
    }

    my_pair p;
    p.key = key;
    p.value = value;
    map -> inner_arr[map -> size++] = p;
    printf("Inserted %i at %s\n", value, key);
}

void print_map(my_map* map)
{
    for (int i = 0; i < map -> size; ++i){
        printf("{\"%s\": %i}\n", map -> inner_arr[i].key, map -> inner_arr[i].value);
    }
}