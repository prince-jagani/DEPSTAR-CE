#include <stdio.h>
void main()
{
    int sticks = 21, pick, cp;
    printf("\n\tID : 22DCE028\n");
    while (sticks >= 1)
    {
        printf("\n\nEnter your pick(1,2,3,4) : ");
        scanf("%d", &pick);
        if ((pick > sticks) || (pick > 4))
        {
            printf("wrong input");
            break;
        }
        if ((sticks == 1) && (pick == 1))
        {
            printf("Computer won");

            break;
        }
        cp = 5 - pick;
        printf("\nComputer's pick : %d", cp);
        sticks = sticks - pick - cp;
        printf("\nRemaining sticks : %d", sticks);
    }
}