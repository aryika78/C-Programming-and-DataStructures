/*WRITE RECURSIVE PROGRAM TO COMPUTE FACTORIAL
 OF A GIVEN NO.WHICH DATA STRUCTURE SHOULD BE USED
 TO IMPLEMENT THIS PROGRAM?*///:ANS:STACK

#include<stdio.h>
#include<conio.h>

int factorial(int);

void main()
{
	int n;
	clrscr();
	printf("\n ENTER ANY NUMBER:");
	scanf("%d",&n);

	if(n<0)
	{
		printf("\n INVALID INPUT");
	}
	else
	{
		printf("\n THE FAC OF %d is %d",n,factorial(n));
	}


getch();
}
int factorial(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		return x*factorial(x-1);
	}

}