#include <stdio.h>

int main()
{
    unsigned int i;

    i = 0xFFFFFFFF;
    i++;
    // overflow
    // [11111111] +
    // [00000001]
    // 1[00000000]

    printf("%li, %u\n", sizeof(i), i);
}