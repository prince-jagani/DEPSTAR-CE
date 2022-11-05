#include <stdio.h>
#include <conio.h>

void main()
{
	int y,p,c;
	clrscr();

	printf("Enter Yellow Ball: ");
	scanf("%d",&y);
	printf("Enter Pink Ball: ");
	scanf("%d",&p);

	c = ++y + y++ + --y + ++p - --p - --p;

	printf("Final Count = %d",c);
	getch();

}