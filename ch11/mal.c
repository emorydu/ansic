#include <stdio.h>

int main(void)
{
    char * name;
    scanf("%s", name);  // very bad!!!

    char name[81];

    return 0;
}