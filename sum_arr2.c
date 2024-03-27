#include <stdio.h>

#define SIZE 10

long sump(int * start, int * end);

int main(void)
{
    int numbers[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;

    answer = sump(numbers, numbers + SIZE);
    printf("The total number of numbers is %ld.\n", answer);

    return 0;
}

long sump(int * start, int * end)
{
    long total = 0;

    while (start < end)
        total += *start++;

    return total;
}