#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14

void main()
{
	double len,g,time;

	clrscr();

	printf("Enter Length of Pendulum: ");
	scanf("%lf",&len);
	printf("Enter Gravity acceleration: ");
	scanf("%lf",&g);

	time= 2*PI*(sqrt(len/g));

	printf("Time period of pendulum = %0.2lf");

	getch();
}
