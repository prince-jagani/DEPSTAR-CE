#include <stdio.h>
void main()
{
    int i, q;
    float sum = 0, p;
    for (int i = 1; i < 100; i++)
    {
        printf("enter item number:");
        scanf("%d", &i);
        if (i > 0)
        {
            printf("enter the quntity of item:");
            scanf("%d", &q);
            printf("Enter the price of item:");
            scanf("%f", &p);
            sum = sum + (q * p);
        }
        else if (i == 0)
        {
            break;
        }
    }
    printf("\nBill amount is %.2f", sum);
}