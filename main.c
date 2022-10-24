#include <stdio.h>
#include "math_util.h"

//int b;  == static int a, másik fájlból is elérthető
//static int c; // a main.c-ből bárhonnan elérhető, de más fájlból nem

/*
void addtwod(double* value)
{
    (*value) += 2;
}

void addtwoint(int* value)
{
    double* d = (double*)(value);
    addtwod(d);
}
*/

int main()
{
    //static int a;

    int n = 10;

    int fact = factorial(n);
    printf("factorial of %i = %i\n", n, fact);

    int fact2 = factorial(4);
    printf("factorial of %i = %i\n", n, fact2);

    int fact3 = factorial(0);
    printf("factorial of %i = %i\n", n, fact3);

    int fact4 = factorial(3);
    printf("factorial of %i = %i\n", n, fact4);

    printf("Ennyiszer volt meghivva a faktorialis: %i\n", cnt);

    int fibonacci = fib(49);
    printf("Fibonacci of %i = %i\n", 49, fibonacci);
}