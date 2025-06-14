#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("ENTER VALUE:");
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("% 4d",a[i][j]);
	sum=sum+a[i][j];
	}
	printf("\n");
}
printf("%d",sum);
getch();
}