#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, b=50, c=100, t, nc, nb, na;
	clrscr();
	printf("Enter total amount : ");
	scanf("%d",&t);
	nc=t/c;
	nb=(t-nc*100)/b;
	na=(t-nc*100-nb*50)/a;
	printf("\n100 notes is %d.",nc);
	printf("\n50 notes is %d.",nb);
	printf("\n10 notes is %d.",na);
	getch();
}
