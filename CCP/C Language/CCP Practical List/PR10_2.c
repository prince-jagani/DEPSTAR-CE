#include <stdio.h>
union book
{
    char title[30];
    char author[30];
    float amount;
    int flag;
    int accession;
} b;
void display(union book b);
void main()
{
    printf("Enter accession number:");
    scanf("%d", &b.accession);
    fflush(stdin);
    printf("\nEnter book name:");
    gets(b.title);
    printf("\nEnter author name:");
    gets(b.author);
    printf("\nEnter amount of book:");
    scanf("%f", &b.amount);
    printf("Enter Flag in 0 or 1:");
    scanf("%d", &b.flag);
    display(b);
}
void display(union book b)
{
    if (b.flag == 0)
    {
        printf("Book Issued");
    }
    else
    {
        printf("Book not Issued");
    }
}
