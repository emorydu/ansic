#include <stdio.h>

void put1(const char * string);

int put2(const char * string);

int main(void)
{
    put1("hello, world!");
    printf("n: %d\n", put2("hello, world!"));

    return 0;
}

void put1(const char * string)
{
    while (*string)
        putchar(*string++);
}

int put2(const char * string)
{
    int n;
    while (*string)
    {
        putchar(*string++);
        n++;
    }
    putchar('\n');

    return n;
}