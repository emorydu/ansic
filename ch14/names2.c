#include <stdio.h>
#include <string.h>

#define NLEN 30

struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

// void getinfo(struct namect *);
// void makeinfo(struct namect *);
// void showinfo(const struct namect *);
struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char * s_gets(char * st, int n);

int main(void)
{
    struct namect person;

    // getinfo(&person);
    // makeinfo(&person);
    // showinfo(&person);
    person = getinfo();
    person = makeinfo(person);
    showinfo(person);

    return 0;
}

struct namect getinfo(void)
//void getinfo(struct namect * pst)
{
    struct namect person;
    printf("Please enter your first name.\n");
    s_gets(person.fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(person.lname, NLEN);

    return person;
}

struct namect makeinfo(struct namect person)
// void makeinfo(struct namect * pst)
{
    // pst->letters = strlen(pst->fname) + strlen(pst->lname);
   person.letters = strlen(person.lname) + strlen(person.fname);

   return person;
}

void showinfo(struct namect person)
// void showinfo(const struct namect * pst)
{
    // printf("%s %s, your name contians %d letters.\n", pst->fname, pst->lname, pst->letters);
    printf("%s %s, your name contians %d letters.\n", 
            person.fname, person.lname, person.letters);
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
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
