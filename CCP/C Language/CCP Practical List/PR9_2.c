#include <stdio.h>
#include <math.h>
int area(int s, int a, int b, int c)
{
    int a1 = sqrt(s * (s - a) * (s - b) * (s - c));
    return a1;
}
int valid(int a, int b, int c)
{
    int s = (a + b + c) / 2;
    return area(s, a, b, c);
}

void main()
{
    int a, b, c;
    printf("Enter side a:");
    scanf("%d", &a);
    printf("Enter side b:");
    scanf("%d", &b);
    printf("Enter side c:");
    scanf("%d", &c);
    int a1 = valid(a, b, c);
    if (a1 > 0)
    {
        printf("Traingle is valid!!");
    }
    else
    {
        printf("Traingle is not valid!!");
    }
}