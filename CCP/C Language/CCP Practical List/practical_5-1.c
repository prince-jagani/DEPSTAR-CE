 #include<stdio.h>
 #include<conio.h>

 void main()
 {
	int h;
	clrscr();

	printf("Enter height: ");
	scanf("%d", &h);

	if(h<150) 		 printf("The person is Dwarf");
	else if(h>=150 && h<165) printf("The person is Average Height");
	else if(h>=165 && h<195) printf("The person is Tall");
	else 			 printf("The person is Abnormal Height");

	getch();

}
