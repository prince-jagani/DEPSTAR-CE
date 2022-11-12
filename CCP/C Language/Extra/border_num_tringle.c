#include <stdio.h>
#include <conio.h>

void main() {
    int i,j,n;

    clrscr();

    printf("Enter n:");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {

	for(j=1;j<=2*n-1;j++)
	{
	    if(i+j == n+1 || j-i == n-1 || i==n){
		printf("%d", i);
	    }
	    else
	    {
		printf(" ");
	    }
	}
	printf("\n");
    }
    getch();
}
