#include <stdio.h>

int main(void)
{
    char name[3];
    // while (fgets(name, 3, stdin) != NULL && name[0] != '\n')
    //     fputs(name, stdout);

    fgets(name, 3, stdin);
    puts(name);

    return 0;
}