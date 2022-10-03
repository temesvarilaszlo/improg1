#include <stdio.h>
#include <stdlib.h>

struct mark_with_weight
{
    int mark;
    int weight;
};

void dump_arr(int* arr, int size)
{
    int len = 0;
    char result[100];

    result[len++] = '[';

    for (int i = 0; i < size; ++i){
        if (i == 0){
            result[len++] = arr [i] + '0';
        }
        
        else {
            result[len++] = ',';
            result[len++] = arr[i] + '0';
        }
    }
    result[len++] = ']';
    result[len++] = '\0';
    printf("%s", result);
    printf("\n");
}

int main()
{
    struct mark_with_weight arr[5];
    arr[0].mark = 2;
    arr[0].weight = 6;
    arr[1].mark = 3;
    arr[1].weight = 5;
    arr[2].mark = 4;
    arr[2].weight = 5;
    arr[3].mark = 5;
    arr[3].weight = 4;
    arr[4].mark = 1;
    arr[4].weight = 5;

    int sum = 0;
    for (int i=0; i < 5; ++i){
        sum += arr[i].mark * arr[i].weight;
    }

    printf("sum: %i\n", sum);
}