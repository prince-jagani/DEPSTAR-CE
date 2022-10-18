#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st Engle :");
    scanf("%d", &a);
    printf("Enter 2nd Engle :");
    scanf("%d", &b);
    printf("Enter 3rd Engle :");
    scanf("%d", &c);
    if (a==0)
    {
        
        printf("Triangle is not valid");
        printf("\nSide could not be 0\n a side is 0");
    }
    if (b==0)
    {
        
        printf("Triangle is not valid");
        printf("\nSide could not be 0\n b side is 0");
    }
    if (c==0)
    {
        
        printf("Triangle is not valid");
        printf("\nSide could not be 0\n c side is 0");
    }
    else
    {
        if (a+b < c || b+c < a || a+c < b)
        {
            printf("Triangle is not valid");
            printf("\nThe sum of two sides must be larger than the third");
        }
        else {
        printf("Triangle is valid");
        }
    }
    
    
    return 0;
}
