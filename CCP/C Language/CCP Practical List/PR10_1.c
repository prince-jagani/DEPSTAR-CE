#include <stdio.h>

struct book
{
    char title[30];
    char author[30];
    float amount;
} b;
void display(struct book b);
void main()
{
    printf("Enter book name:");
    gets(b.title);
    printf("\nEnter author name:");
    gets(b.author);
    printf("\nEnter amount of book:");
    scanf("%f", &b.amount);
    display(b);
}
void display(struct book b)
{
    printf("\nBook name is %s", b.title);
    printf("\nauthor name is %s", b.author);
    printf("\nAmount of book is %f", b.amount);
}
