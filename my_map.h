#ifndef MY_MAP
#define MY_MAP

#include <stdlib.h>

typedef struct my_pair
{
   char* key;
   int value;
} my_pair;

typedef struct my_map
{
    int capacity;
    int size;
    my_pair* inner_arr;
} my_map;

my_map my_init();

void my_deinit();

void my_insert(my_map* map, char* key, int value);

void print_map(my_map* map);

#endif