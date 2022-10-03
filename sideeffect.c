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
    printf("%i\n", pure_add(5,6));

    int n = 10;
    add_to(&n,10);
    printf("%i\n", n);

    int i = 42;

    int* ip = i;

    //    i              ip          változó
    // 0x07F9          0xA248        memóriacím
    //  [42]            [42]         érték

    int* ip = &i;
    //    i              ip
    // 0x07F9          0xA248
    //  [42]          [0x07F9]

    ++i;
    ++(*ip);
    //    i              ip
    // 0x07F9          0xA248
    //  [43]          [0x07F9]

}