#include <stdio.h>

int main(void)
{
    // int n = 5;
    // double x;
    // int * p1 = &n;
    // double * pd = &x;
    // x = n;
    // pd = p1;    // compile error

    int * pt;
    int (*pa)[3];
    int ar1[2][3];
    int ar2[3][2];
    int **p2;

    pt = &ar1[0][0];    // ok
    pt = ar1[0];    // ok

    pt = ar1;   // ko
    pa = ar1;   // ok
    pa = ar2;   // ko

    p2 = &pt;   // ok
    *p2 = ar2[0];   // ok
    p2 = ar2;   // ko

    return 0;
}