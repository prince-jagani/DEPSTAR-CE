#include <stdio.h>
int main()
{
    int num;
    float arg1, arg2;
    printf("\nwhat type of conversation you want,choose one of this");
    printf("\n");
    printf("or you want to exit please enter 0\n");
    printf("1.\b Kilometers to miles\n");
    printf("2.\b Inches to foots\n");
    printf("3.\b Centimetre to Inches\n");
    printf("4.\b Pounds to kilograms\n");
    printf("5.\b Inches to meters\n");
    scanf("%d", &num);
    if (num == 0)
    {
        goto end;
    }
    else
    {
        switch (num)
        {
        case 1:
            printf("enter kilometers value\n");
            scanf("%f", &arg2);
            arg1 = arg2 / 1.609;
            printf("%f kilometers is %f miles", arg2, arg1);
            break;

        case 2:

            printf("enter the value of inches");
            scanf("%f", &arg2);
            arg1 = arg1 / 12;
            printf("%f inches is %f foot", arg2, arg1);
            break;

        case 3:

            printf("enter centimeters value\n");
            scanf("%f", &arg2);
            arg1 = arg2 / 100000;
            printf("%f kilometers is %f miles", arg2, arg1);
            break;

        case 4:

            printf("enter pounds value\n");
            scanf("%f", &arg2);
            arg1 = arg2 * 2.205;
            printf("%f pounds is %f kilograms", arg2, arg1);
            break;

        case 5:

            printf("enter inches value\n");
            scanf("%f", &arg2);
            arg1 = arg2 / 39.37;
            printf("%f inches is %f meters", arg2, arg1);
            break;
        default:
            printf("data is wrong");
            break;
        }
    }

end:

    return 0;
}