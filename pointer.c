#include <stdio.h>

int pure_add(int lhs, int rhs)
{
    return lhs + rhs;
}

void add_to(int* lhs, int rhs)
{
    *lhs += rhs;
}

int main()
{
    int input;

    scanf("%i", &input); //scanf pointert vár
    printf("%i\n", input);

    int i = 42;
    int* ip = &i;

    void* vc = ip;

    int* asdf = (int*)vc;

    printf("%i\n", *asdf);
}