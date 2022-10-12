#include<stdio.h>
void main()
{
    int m,y;
    printf("Enter month : ");
    scanf("%d/%d",&m,&y);
    if(m==1 || m==3 || m==5 || m==7 || m==8  || m==10 || m==12)
    {
        printf("31 days of this %d month\n",m);
    }
    else if(m==4 || m==11 || m==6 || m==9)
    {
        printf("30 days of this %d month\n",m);
        
    }
    else
    {
        if(y%400==0 || (y%4==0 && y%100!=0))
        {
            printf("29 days of this %d mmonth\n",m);
        }
        else
        {
            printf("28 days of this %d mmonth\n",m);
        }
    }
} 