#include<stdio.h>
void main()
{
    int per;
    char grade;
    printf("Enter per : ");
    scanf("%d",&per);
    if(per>=75)
    {
        printf("distintion");
        grade='A';
    }
    else if(per<75 && per>=65)
    {
        printf("first class");
        grade='B';
    }
    else if(per<65 && per>=55)
    {
        printf("sceond class");
        grade='C';
    }
    else if(per<55 && per>=45)
    {
        printf("third clas");
        grade='D';
    }
    else
    {
        printf("fail");
        grade='F';
    }
    printf("\nyour grade is %c",grade);
}