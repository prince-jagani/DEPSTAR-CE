#include <stdio.h>
void main()
{
    int marks[10], dist = 0, first = 0, pass = 0, fail = 0;
    printf("\t   ID:22DCE028\n");
    printf("Enter marks of student:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }
    int *p = marks;
    for (int i = 0; i < 10; i++)
    {
        if (*(p + i) < 40)
        {
            fail++;
        }
        else if (*(p + i) < 60)
        {
            pass++;
        }
        else if (*(p + i) < 70)
        {
            first++;
        }
        else if (*(p + i) > 70)
        {
            dist++;
        }
    }
    printf("Number of distinction student:%d\n", dist);
    printf("Number of first class student:%d\n", first);
    printf("Number of pass student:%d\n", pass);
    printf("Number of fail student:%d", fail);
}