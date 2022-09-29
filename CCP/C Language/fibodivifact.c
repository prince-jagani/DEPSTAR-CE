#include<stdio.h>
void main()
{
    int n,a=0,b=1,i=0,sum=0,m=1,ans=0,j;
    printf("Emter number : ");
    scanf("%d",&n);
    j=2;
    if(n>0)
    {
        printf("%d/%d\t",a,b);
        printf("%d/%d\t",b,b);
        if(n!=1)
        {
            for(i=0;i<n-2;i++)
            {
                sum = a+b;
                a=b;
                b=sum;
                m=m*j;
                j++;
                ans=sum/m;
                printf("%d/%d\t",sum, m);
            }
        }
    }
    
}