#include <stdio.h>

struct person
{
    int id;
    struct {char first[20]; char last[20];};
};

int main(void)
{
    puts("hello, world");
    return 0;
}
