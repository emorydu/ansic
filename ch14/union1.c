#include <stdio.h>
#include <string.h>

union d
{
    int i;
    float f;
    char str[20];
};

int main(void)
{
    union d data;

    printf("Memory size occupied by data: %zd\n", sizeof(data));

    return 0;
}
