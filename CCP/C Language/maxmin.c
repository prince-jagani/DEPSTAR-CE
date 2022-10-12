#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);
    printf("Enter number c : ");
    scanf("%d",&c);
    if(a=b=c)
    {
        printf("%d = %d = %d is same",a,b,c);
    }
    else if((a>b) && (a>c))
    {
        printf("%d is greterthan %d and %d",a,b,c);
    }
    else if(b>c)
    {
        printf("%d is max",b);
    }
    else
    {
        printf("%d is max",c);
    }
    
}