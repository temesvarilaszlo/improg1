#include "guessing.h"

int get_target(int min, int max){
    int rnd = rand() % (max - min + 1) + min;
    return rnd;
}

void evaluate(int target)
{
    int guess;
    do {
        scanf("%i", &guess);

        if (target < guess){
            printf("Kisebb\n");
        }
        else{
            printf("Nagyobb\n");
        }
    }while (target != guess);

    printf("GG (%i)\n", target);
}