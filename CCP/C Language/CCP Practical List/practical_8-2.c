#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {

	char name[5][20];
	char temp[20];
	int i=0,j=0;

	clrscr();

	printf("\n22DCE035\n\n");

	for(i=0; i<5; i++)
	{
		gets(name[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(strcmp(name[i],name[j]) > 0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}

	printf("\n\nSorted Name List:\n\n");
	for(i=0; i<5; i++)
	{
		printf("%s\t",name[i]);
	}

	getch();
}
