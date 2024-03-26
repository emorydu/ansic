#include <stdio.h>
#define PERIDO '.'

int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIDO)
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}