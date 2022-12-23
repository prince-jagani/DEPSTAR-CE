#include<stdio.h>

int prime()
{
    int n,i;
    printf("Enter number: ");
    scanf("%d", &n);

    for(i=2; i<n/2+1; i++)
    {
        if(n%i==0)
        {
            i=0;
            break;
        }
    }
    return i;
}

void main()
{
    int isprime;
    isprime = prime();

    if(isprime == 0)
        printf("Number is not prime.");
    else
        printf("Number is prime.");
}

