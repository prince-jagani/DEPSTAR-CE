#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,m;
	char c;
	clrscr();

	printf("\n\t  Multiplication Table (1 to 7)\n\n");

	for(i=1;i<53;i++) printf("%c", 4);
	printf("\n");
	for(i=1; i<11; i++)
	{
		for(j=1; j<8; j++)
		{
			m=i*j;
			printf("%d\t",m);
		}
		printf("\n");
	}
	for(i=1;i<53;i++) printf("%c", 4);
	getch();
}
