#include <stdio.h>

#define MAXLENGTH 81
#define MSG "I am a symbolic string constant."

int main(void)
{
    char words[MAXLENGTH] = "I am a string an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}
