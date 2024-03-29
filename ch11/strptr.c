#include <stdio.h>

int main(void)
{
    printf("%s, %p, %c\n", "We", "are", *"space farers");   // We, 0xxxxx, s 

    return 0;
}