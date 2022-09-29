#include<stdio.h>
void main()
{
   int i,fact=1,n;
   printf("Enter number : ");
   scanf("%d",&n);
   if(n<=1)
   {
        printf("\n%d! = %d",n,fact);
   }
   else
   {
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("\n%d! = %d",n,fact);
   }
}