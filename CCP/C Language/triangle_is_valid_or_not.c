#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter engle : ");
    scanf("%d",&a);
    printf("Enter engle : ");
    scanf("%d",&b);
    printf("Enter engle : ");
    scanf("%d",&c);
    if(a==0 || b==0 || c==0)
    {
        printf("triangle is not valid");
    }
    else
    {
        if(a+b<c  || b+c<a || c+a<b)
        {
            printf("triangle is not valid ");
        }
        else
        {
            printf("triangle is valid");
        }
    }
}
