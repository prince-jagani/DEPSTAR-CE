#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,j=1;
	char c;
	clrscr();

	printf("\n\t  Multiplication Table (1 to 7)\n\n");

      /*	for(i=1;i<53;i++) printf("%c", 4);	*/

       while(i<53)
       {
		printf("%c",4);
		i++;
       }

	printf("\n");

	i=1;
	do{
	    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",j*i,j*2*i,j*3*i,j*4*i,j*5*i,j*6*i,j*7*i);
	    i++;
	}while(i<=10);

     /*	for(i=1; i<11; i++)
	{
		for(j=1; j<8; j++)
		{
			m=i*j;
			printf("%d\t",m);
		}
		printf("\n");
	}
	*/
	for(i=1;i<53;i++) printf("%c", 4);
	getch();
}
