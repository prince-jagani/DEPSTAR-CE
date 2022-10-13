#include<stdio.h>
void main()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("a is 0");
    }
    else if(a>0)
    {
        printf("%d is positive",a);
    }
    else
    {
        printf("%d is negative",a);
    }
}