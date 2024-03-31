#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 81

char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);
void show(void (*fp) (char *), char * str);
void to_upper(char *);
void to_lower(char *);
void transpose(char *);
void dummy(char *);

int main(void)
{
    char line[LEN];
    char copy[LEN];
    char choice;
    void (*pfunc) (char *);

    puts("Enter a string (empty line to quit):");
    while (s_gets(line, LEN) && line[0])
    {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice)
            {
            case 'u': pfunc = to_upper; break;
            case 'l': pfunc = to_lower; break;
            case 't': pfunc = transpose; break;
            case 'o': pfunc = dummy; break;
            }
            strcpy(copy, line);
            show(pfunc, copy);
        }
        puts("Enter a string (empty line to quit):");
    }
    puts("Bye!");

    return 0;
}

char showmenu(void)
{
    char ans;
    puts("Enter menu choice:");
    puts("u) uppercase          l) lowercase");
    puts("t) transposed case    o) original case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline();
    while (!strchr("ulton", ans))
    {
        puts("Please enter a u, l, t, o, or n:") ;
        ans = tolower(getchar());
        eatline();
    }

    return ans;
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}

void to_upper(char * str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void to_lower(char * str)
{
    while (*str)        
    {
        *str = tolower(*str);
        str++;
    }
}

void transpose(char * str)
{
    while (*str)
    {
        if (islower(*str)) 
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void dummy(char * str)
{
    // todo
}

void show(void (*fp) (char *), char * str)
{
    (*fp)(str);
    puts(str);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            eatline();
    }

    return ret_val;
}
