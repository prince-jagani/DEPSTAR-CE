#include <stdio.h>
void main()
{
    int n, ans = 0, power = 1;
    printf("enter the value of binary number:");
    scanf("%d", &n);
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans = ans + (lastdigit * power);
        power = power * 2;
        n = n / 10;
    }
    printf("decimal=%d", ans);
}