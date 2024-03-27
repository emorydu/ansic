#include <stdio.h>

int main(void)
{
    int x = 5;
    double d = 10.0;
    int * px = &x;
    double * pd = &d;

    printf("sizeofp *int: %zd\n", sizeof(px));
    printf("sizeofp *double: %zd\n", sizeof(pd));

	return 0;
}
