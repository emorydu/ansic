#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;
    unsigned long div;
    bool is_prime;
    
    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num))
    {
        for (div = 2, is_prime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n",
                            num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n",
                            num, div);
                is_prime = false; 
            }
        }
        if (is_prime)
            printf("%lu is prime.\n", num);   
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}