#include <stdio.h>
#include <conio.h>

void main()
{
	int r,s,a;
	clrscr();

	printf("Enter Age of Ram: ");
	scanf("%d",&r);
	printf("Enter Age of Shyam: ");
	scanf("%d",&s);
	printf("Enter Age of Ajay: ");
	scanf("%d",&a);

	if(r==s && r==a) 	 printf("All are of equal age");
	else if(r==s)		 printf("Ram and Shyam are equal");
	else if(s==a)		 printf("Shyam and Ajay are equal");
	else if(r==a)		 printf("Ram and Ajay are equal");
	else
	{
		if(r<s){
			if(r<a)	 printf("Ram is youngest");
			   else	 printf("Ajay is youngest");
		}
		else {
			if(s<a)	 printf("Shyam is youngest");
			   else	 printf("Ajay is youngest");
		}
	}
	getch();
}
