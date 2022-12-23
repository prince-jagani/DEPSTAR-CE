// No returntype but with argument

#include <stdio.h>
void prime(int n)
{
    int count = 0;
    for (int i = 2; i <= (n / 2) + 1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("Number is nonprime!!");
    }
    else
    {
        printf("Number is prime!!");
    }
}
void main()
{
    int n;
    printf("Enter num:");
    scanf("%d", &n);
    prime(n);
}