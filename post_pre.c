#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;   // 1
    pre_b = ++b;    // 2
    printf("%d %d %d %d\n", a, a_post, b, pre_b);

    return 0;
}