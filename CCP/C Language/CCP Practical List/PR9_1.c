// without function
/*#include<stdio.h>
void main()
{
    int i,n,count=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("given number is prime");
    }
    else
    {
        printf("given number is non prime");
    }
}*/





// no return no argument
/*#include<stdio.h>
void prime()
{
    int i,n,count=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("given number is prime");
    }
    else
    {
        printf("given number is non prime");
    }
}
void main()
{
    prime();
}*/





// no argument with return 
/*#include<stdio.h>
int prime()
{
    int i,n,count=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int count;
    count=prime();
    if(count==1)
    {
        printf("given number is prime");
    }
    else
    {
        printf("given number is non prime");
    }

}*/





// with argument no return 
/*#include<stdio.h>
void prime(int n)
{
    int i,count=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("given number is prime");
    }
    else
    {
        printf("given number is non prime");
    }
}
void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    prime(n);
}*/





// with argument with return
#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}
void main()
{
    int n,count;
    printf("Enter number : ");
    scanf("%d",&n);
    count=prime(n);
    if(count==1)
    {
        printf("given number is prime");
    }
    else
    {
        printf("given number is non prime");
    }
}