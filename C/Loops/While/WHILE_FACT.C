#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
clrscr();
printf("ENTER NO:");
scanf("%d",&n);
while(i<=n)
{
	if(n%i==0)
	{
	printf("\nfactor=%d",i);
	}
i++;
}



getch();
}