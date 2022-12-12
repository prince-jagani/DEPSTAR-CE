#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[20],str2[20];
	int len;
	clrscr();

	printf("\n22DCE035\n\n");

	printf("Enter String: ");
	gets(str1);

	len = strlen(str1);

	strcpy(str1,str2);
	strrev(str2);

	if(strcmp(str1,str2) == 0)
		printf("String is Palindrome");
	else
		printf("String is not Palindrome");

	getch();
}
