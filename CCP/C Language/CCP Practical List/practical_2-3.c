#include<stdio.h>
#include<conio.h>

void main()
{
	int salary,da,hra,ma,ta,pf,it,gross,net,allow,deduct;

	clrscr();

	printf("Enter your Salary: ");
	scanf("%d",&salary);
	printf("Enter IT Amount: ");
	scanf("%d",&it);
	printf("\n____________________________");

	da=(salary*70)/100;
	hra=(salary*7)/100;
	ma=(salary*2)/100;
	ta=(salary*4)/100;
	allow=da+hra+ma+ta;

	pf=(salary*12)/100;
	deduct=pf+it;

	printf("\nBasic Salary \t\t= %d",salary);
	printf("\nDA of basic salary \t= %d",da);
	printf("\nHRA of basic salary \t= %d",hra);
	printf("\nMA of basic salary \t= %d",ma);
	printf("\nTA of basic salary \t= %d",ta);

	printf("\n____________________________");
	printf("\nPF of basic salary \t= %d",pf);

	printf("\n____________________________");

	printf("\nGross salary \t\t= %d",salary+allow);
	printf("\nNet Salary \t\t= %d",salary-deduct);
	printf("\n____________________________");

	getch();
}
