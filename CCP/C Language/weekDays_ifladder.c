#include<stdio.h>
void main()
{
    char day;
    char a=1; // smile mate
    printf("Enter day : ");
    scanf("%c",&day);
    if(day=='m')
    {
        printf("today is monday");
    }
    else if(day=='t')
    {
        printf("today is tuesday");
    }
    else if(day=='w')
    {
        printf("today is wednesday");
    }
    else if(day=='a')
    {
        printf("today is thursday");
    }
    else if(day=='f')
    {
        printf("today is firday");
    }
    else if(day=='s')
    {
        printf("today is saterday");
    }
    else if(day=='h')
    {
        printf("today is sunday");
    }
    else
    {
        printf("have a nice day %c",a);
    }
}
