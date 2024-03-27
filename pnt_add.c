#include <stdio.h>

#define SIZE 4

int main(void)
{
    short dates[SIZE];
    short * pti;
    short i;
    double bills[SIZE];
    double *ptd;

    pti = dates;
    ptd = bills;
    printf("%23s %15s\n", "short", "double");
    for (i = 0; i < SIZE; i++)
        printf("pointers + %d: %10p %10p\n", i, pti + i, ptd + i);

    return 0;
}