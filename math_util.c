#include "math_util.h"
#include <stdio.h>

int cnt = 0;

int factorial(int n)
{   
    if (n == 0){
        ++cnt;
        return 1;
    }
    else return n * factorial(n-1);
}

unsigned long long int fib(int n)
{
    if (n <= 2){
        return 1;
    }
    else if (n > 50){
        printf("Ne szórakozzá'\n");
        return 0;
    }
    else return fib(n-1) + fib(n-2);
}