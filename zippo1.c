#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {
        { 2, 4 },
        { 6, 8 },
        { 1, 3 },
        { 5, 47 },
    };

    printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1); // &2-&1 = 8
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1); // &2-&1 = 4
    printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);   // &2-&1 = 4
    printf("zippo[0][0] = %d\n", zippo[0][0]);  // 2
    printf("*zippo[0] = %d\n", *zippo[0]);  // 2
    printf("**zippo = %d\n", **zippo);  // 2
    printf("zippo[2][1] = %d\n", zippo[2][1]);   // 3
    printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo+2) + 1));  // 3

    return 0;
}