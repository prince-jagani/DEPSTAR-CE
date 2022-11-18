#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter n:");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 1)
        {
            printf("%d  ", i);
        }
        i++;
    }
}