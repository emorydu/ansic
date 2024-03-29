#include <stdio.h>
#include <string.h>
#include "sgets.h"

#define LIM 5
#define SIZE 40

int main(void)
{
    char qwords[LIM][SIZE];    
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);

    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else
        {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < sizeof(qwords)/sizeof(qwords[0]); i++)
        puts(qwords[i]);

    return 0;
}

