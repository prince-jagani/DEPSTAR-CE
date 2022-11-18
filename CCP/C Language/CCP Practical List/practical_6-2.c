#include <stdio.h>
void main()
{
    int a, b, i = 1, m = 1;
    printf("enter num1:");
    scanf("%d", &a);
    printf("enter num2: ");
    scanf("%d", &b);
    while (i <= b)
    {
        m = m * a;
        i++;
        printf("%d ", m);
    }
    // printf("%d", m);
}
