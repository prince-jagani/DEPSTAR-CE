#include<stdio.h>

int prime(int n)
{
    int i;

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
    int n, isprime;
    printf("Enter number: ");
    scanf("%d", &n);

    isprime = prime(n);
    if(isprime == 0)
        printf("Number is not prime.");
    else
        printf("Number is prime.");
}


