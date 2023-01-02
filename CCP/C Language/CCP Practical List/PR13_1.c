#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll_no;
    char name[20];
    int age;
    int class;
    char branch[20];
};
void main()
{
    struct student *ptr;
    int n;
    printf("Enter number of student:");
    scanf("%d", &n);
    ptr = (struct student *)malloc(n * sizeof(struct student));
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student:");
        scanf("%s", (ptr + i)->name);
        printf("Enter roll number of student:");
        scanf("%d", &(ptr + i)->roll_no);
        printf("Enter age of student:");
        scanf("%d", &(ptr + i)->age);
        printf("Enter class:");
        scanf("%d", &(ptr + i)->class);
        fflush(stdin);
        printf("Enter branch of student:");
        scanf("%s", (ptr + i)->branch);
    }
    printf("-----------------------------------------\n");
    printf("name\trollno\tage\tclass\tbranch\n");
    for (int i = 0; i < n; i++)
    {

        printf("%s\t", (ptr + i)->name);
        printf("%d\t", (ptr + i)->roll_no);
        printf("%d\t", (ptr + i)->age);
        printf("%d\t", (ptr + i)->class);
        printf("%s\n", (ptr + i)->branch);
    }
    free(ptr);
}
