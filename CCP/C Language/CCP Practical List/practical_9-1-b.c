#include<stdio.h>

void prime(int n)
{
    int i;

    for(i=2; i<n/2+1; i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime.");
            i=0;
            break;
        }
    }
    if(i!=0)
        printf("Number is prime.");
}

void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    prime(n);

}

