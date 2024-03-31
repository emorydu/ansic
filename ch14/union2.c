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
    
    data.i = 10;
    data.f = 22.3;
    strcpy(data.str, "C Programing");

    printf("data.i: %d\n", data.i);
    printf("data.f: %f\n", data.f);
    printf("data.str: %s\n", data.str);

    return 0;
}
