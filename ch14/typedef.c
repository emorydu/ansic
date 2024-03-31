#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 30
#define MAXSBTL 100

typedef struct {
    int id;
    char title[MAXTITL];
    char author[MAXAUTL];
    char subject[MAXSBTL];
} books;

int main(void)
{
    books book;

    strcpy(book.title, "C");
    strcpy(book.author, "K&R");
    strcpy(book.subject, "Programing");
    book.id = 1;


    printf("id: %d\n", book.id);
    printf("title: %s\n", book.title);
    printf("author: %s\n", book.author);
    printf("subject: %s\n", book.subject);

    return 0;
}
