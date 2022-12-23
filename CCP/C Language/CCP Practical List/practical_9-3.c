#include<stdio.h>

long int binary(int n)
{
    long int b1 = 0;

    if(n == 0)
        return 0;
    return ((n%2)+10*binary(n/2));
}

void main()
{
    int n;
    long int b;

    printf("Enter number: ");
    scanf("%d", &n);
    if(n<0)
        n = 32768+n;
    b = binary(n);
    printf("%.8ld", b);
}
