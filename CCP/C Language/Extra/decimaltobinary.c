#include <stdio.h>
void main()
{
    int n, ans = 0, power = 1;
    printf("enter value of decimal number:");
    scanf("%d", &n);
    while (n > 0)
    {
        int paritydigit = n % 2;
        ans += paritydigit * power;
        power *= 10;
        n = n / 2;
    }
    printf("binary=%d", ans);
}