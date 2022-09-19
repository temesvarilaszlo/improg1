#include <stdio.h>

int main(){
    
    int i;
    double n = 8.1;
    i = (int)n;

    int size = sizeof(i);

    printf("n: %f, i: %i\n", n, i);
    printf("size of i: %i\n", size);
    
    return 0;
}