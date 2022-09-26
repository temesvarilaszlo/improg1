#include <stdio.h>

int rec_fact(int n)
{
    if (n==0) return 1;
    return n * rec_fact(n-1);
}

int it_fact(int n)
{
    int result = 1;
    for (int i = 2; i <= n; ++i){
        result *= i;
    }
    return result;
}

int main()
{
    int i = 6;
    int a = it_fact(i);
    int b = rec_fact(i);
    printf("%i,%i\n",a,b);
}