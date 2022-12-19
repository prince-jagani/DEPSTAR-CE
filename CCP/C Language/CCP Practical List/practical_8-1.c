#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char pass[20], i = 0, a = 0, b = 0, c = 0, d = 0;
    printf("ID=22DCE028\n\n");
    printf("enter your password:");
    scanf("%s", pass);
    int len = strlen(pass);
    do
    {
        if (islower(pass[i]))
        {
            a = 1;
        }
        else if (isupper(pass[i]))
        {
            b = 1;
        }
        else if (isdigit(pass[i]))
        {
            c = 1;
        }
        else if (ispunct(pass[i]))
        {
            d = 1;
        }
        i++;
    } while (i < len);
    if (a == 1 && b == 1 && c == 1 && d == 1)
    {
        printf("\nYour Password is Strong!!\n");
    }
    else
    {
        if (b != 1 && c == 1 && d == 1 && a == 1)
        {
            printf("Your password is average!!\n");
        }
        else
        {
            printf("Your password is poor!!");
        }
    }
}
