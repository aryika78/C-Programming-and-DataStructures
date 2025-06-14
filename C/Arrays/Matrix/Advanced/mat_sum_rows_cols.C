#include<stdio.h>
#include<conio.h>
/*FINDING SUM AND GRANDSUM IN MATRIX
TV  	10    20    15  SUM1
MOBILE  25    15    30  SUM2
LAPTOP  5     30    10  SUM3
	SUM1  SUM2  SUM3 GDSM
*/




void main()
{
int a[4][4],i,j,sum=0,gt=0;
clrscr();

for(i=0;i<3;i++)//input values
{
	for(j=0;j<3;j++)
	{
		printf("ENTER NO:");
		scanf("%d",&a[i][j]);
	}
}

//row add:

for(i=0;i<3;i++)
{
sum=0;
	for(j=0;j<3;j++)
	{
		sum=sum+a[i][j];
	}
	a[i][j]=sum;

}

//column add:

for(j=0;j<3;j++)
{
sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][j];
	}
	a[i][j]=sum;
}

//grandtotal
	j=3;
	for(i=0;i<3;i++)
	{
	gt=gt+a[i][j];
	}

	i=3;
	for(j=0;j<3;j++)
	{
	gt=gt+a[i][j];
	}

a[i][j]=gt;

for(i=0;i<4;i++)//output values
{
	for(j=0;j<4;j++)
	{
		printf(" %4d",a[i][j]);
	}
printf("\n");
}


getch();
}