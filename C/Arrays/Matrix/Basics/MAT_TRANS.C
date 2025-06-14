#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j;
clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER NO:" );
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	b[i][j]=a[j][i];
	printf(" %4d",b[i][j]);
	}
	printf("\n");
}
getch();
}