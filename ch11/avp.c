#include <stdio.h>

int main(void)
{
    char heart[] = "I love Emory.Du!";
    const char * head = "I love Emory.Duuu!";
    int i;

    for (i = 0; i < 6; i++)
        putchar(heart[i]);
    putchar('\n');
    for (i = 0; i < 6; i++)
        putchar(head[i]);
    putchar('\n');

    for (i = 0; i < 6; i++)
        putchar(*(heart + i));
    putchar('\n');
    for (i = 0; i < 6; i++)
        putchar(*(head + i));
    putchar('\n');  

    while (*(head) != '\0') 
        putchar(*(head++));
    putchar('\n'); 

    head = heart;   // ok
    // heart = head;   // ko

    heart[7] = 'M'; // ok
    *(heart + 7) = 'M'; // ok

    // char * word = "frame";
    // word[1] = 'l';  // ???

    // char * p1 = "Klingon";
    // p1[0] = 'F';
    // printf("Klingon");
    // printf(": Beware the %ss!\n", "Klingon");

    const char * word = "frame";

    return 0;
}