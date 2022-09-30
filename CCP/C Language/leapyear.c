#include<stdio.h>
void main()
{
    int yy;
    printf("Enter year : ");
    scanf("%d",&yy);
    if(yy%400==0 || (yy%4==0 && yy%100!=0))
    {
        printf("%d year is leap year",yy);
    }
    else
    {
        printf("%d year is not leap year",yy);
    }
}