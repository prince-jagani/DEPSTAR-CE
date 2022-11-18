#include<stdio.h>
#include<conio.h>

void main()
{

    int sscYY,hscYY;
    float ssc,hsc;
    char name[100],add[100],sscSch[100],hscSch[100],mobile[100];
    char tech,hobby,gender;
    int d,m,y;

    clrscr();

    printf("Enter your name: ");
    gets(name);
    printf("Enter address: ");
    gets(add);
    printf("Enter mobile no.: ");
    fflush(stdin);
    gets(mobile);
    printf("Enter gender: ");
    scanf("%s",gender);
    printf("Enter Date of Birth[DD/MM/YYYY]: ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Enter SSC Percentage: ");
    scanf("%f",&ssc);
    printf("Enter SSC School: ");
    fflush(stdin);
    gets(sscSch);
    printf("Enter SSC year: ");
    scanf("%d",&sscYY);
    printf("Enter HSC Percentage: ");
    scanf("%f",&hsc);
    printf("Enter HSC School: ");
    fflush(stdin);
    gets(hscSch);
    printf("Enter HSC year: ");
    scanf("%d",&hscYY);
    printf("Enter technical skills: ");
    scanf("%s",tech);
    printf("Enter Hobbies: ");
    scanf("%s",hobby);

    clrscr();

    printf("#=====#=====#=====#=====#=====#=====#=====#=====#=====#=====");
    printf("\n\t\t\tBIO-DATA\n");
    printf("#=====#=====#=====#=====#=====#=====#=====#=====#=====#=====");

    printf("\n\t\tBasic Information");
    printf("\n\t\t-----------------");
    printf("\nName \t\t: %s",name);
    printf("\nAddress \t: %s",add);
    printf("\nMobile No. \t: %s",mobile);
    printf("\nGender \t\t: %s",gender);
    printf("\nDate of Birth \t: %d/%d/%d\n",d,m,y);

    printf("\n\t\tEducation Information");
    printf("\n\t\t---------------------");
    printf("\nSSC ====>\n");
    printf("Percentage \t: %f \t School : %s \t Year : %d",ssc,sscSch,sscYY);
    printf("\nHSC ====>\n");
    printf("Percentage \t: %f \t School : %s \t Year : %d\n",hsc,hscSch,hscYY);

    printf("\n\t\tOther Information");
    printf("\n\t\t-----------------");
    printf("\nTechnical Skill : %s",tech);
    printf("\nHobbies \t: %s",hobby);

    getch();
}
