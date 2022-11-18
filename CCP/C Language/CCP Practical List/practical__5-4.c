#include <stdio.h>
#include <conio.h>

void main()
{
	int stock,req;
	char credit;
	clrscr();

	stock = 100;
	printf("Enter Order: ");
	scanf("%d",&req);

	printf("Is Credit Available?[Y/N]: ");
	scanf("%c",credit);

	if(credit=='Y' || credit=='y')
	{
		if(req<=stock)
			printf("has Requirements\nOrder placed");
		else {
			printf("Out of Stock\n");
			printf("Credit will be refunded");
		}
	}else if(credit=='N' || credit=='n')
			printf("Insufficient Credit");

	getch();
}
