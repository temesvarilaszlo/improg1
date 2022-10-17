#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "guessing.h"

int main()
{
    srand(time(0));
    
    const int min = 0, max = 100;
    
    const int target = get_target(min, max);

    printf("Tippelj %i és %i között\n", min, max);

    evaluate(target);    
}