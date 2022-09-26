#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year)
{
    bool result = (year % 4 == 0 && year % 100 !=0) || year % 400 == 0;
    return result;
}

int main()
{
    int year = 1996;

    bool is_leap_year = leap_year(year);

    printf("%s", is_leap_year ? "True\n" : "False\n");
}