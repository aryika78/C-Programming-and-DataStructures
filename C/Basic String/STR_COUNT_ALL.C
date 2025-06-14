#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,c1=0,c2=0,c3=0,c4=0,c5=0;
clrscr();

printf("ENTER STRING:");
gets(a);

for(i=0;a[i]!=NULL;i++)
{
	if(a[i]>=65&&a[i]<=90)
	{
	c1++;
	}

	if(a[i]>=97&&a[i]<=122)
	{
	c2++;
	}

	if(a[i]==32)
	{
	c3++;
	}

	if(a[i]>=48&&a[i]<=57)
	{
	c4++;
	}

	else
	{
	c5++;
	}
}
	printf("\nUPPER CASE=%d",c1);
	printf("\nLOWER CASE=%d",c2);
	printf("\nSPACE=%d",c3);
	printf("\nDIGIT=%d",c4);
	printf("\nSPECIAL CAHR=%d",c5);

getch();
}