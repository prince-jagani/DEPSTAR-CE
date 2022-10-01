#include<stdio.h>
void main()
{
    char a;
    printf("Enter char or digit or special character : ");
    scanf("%c",&a);
    if(a>=48 && a<=57)
    {
        printf("this is number");
    }
    else if((a>=65 && a<=90) || (a>=97 && a<=122))
    {
        printf("this is character");
    }
    else
    {
        printf("this is special character");
    }
}