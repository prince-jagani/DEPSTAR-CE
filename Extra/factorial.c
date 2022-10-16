#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("factorial of %d is %d", num, factorial(num));
}