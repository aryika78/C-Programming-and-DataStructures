/*WHAT IS RECURSION? WRITE A PSEUDO CODE IN 'C' LANGUAGE TO FIND THE
MULTIPLICATION OF TWO NATURAL NOS*/

/*MULTIPLICATION TABLE OF NATURAL NOS:
5*4=20
5*4=5+5+5+5=20
5*4=4+4+4+4+4=20*/

#include<stdio.h>
#include<conio.h>

int product(int,int);

void main()
{
	int a,b;
	clrscr();
	printf("\n ENTER FIRST NATURAL NO:");
	scanf("%d",&a);
	printf("\n ENTER SECOND NATURAL NO:");
	scanf("%d",&b);

	if(a>0&&b>0)
	{
		printf("The product of %d and %d is %d",a,b,product(a,b));
	}
	else
	{
		printf("\n Please enter valid natural number!!");
	}

getch();
}

int product(int x,int y)
{
	if(x<y)
	{
		return product(y,x);
	}
	else if(y!=0)
	{
		return (x+product(x,y-1));
	}
	else
	{
	return 0;
	}
}