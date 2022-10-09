#include<stdio.h>
int main()
{
    int age;
    printf("Entr your age : ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("your age %d so you are elegible for vote",age);
    }
    else
    {
        printf("your age %d so you are not elegible for vote",age);
    }
    return 0;
    
}