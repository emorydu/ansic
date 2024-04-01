#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
    int i;
    int tot = 0;

    for (i = 1; i <= LIMIT; i++)
    {
        tot += 2 * i * i + 1; 
#ifdef JUST_CHECKING
    printf("i = %d, running total = %d\n", i, tot);
#endif
    }
    printf("Grand total = %d\n", tot);

    return 0;
}
