#include <stdio.h>
void main()
{
    // label:
    //     printf("we are inside label");
    //     goto end;
    //     printf("hello world");
    // end:
    //     printf("\nwe are at end");

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter number.enter 0 to exit.\n\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    printf("you are now exit.");
}