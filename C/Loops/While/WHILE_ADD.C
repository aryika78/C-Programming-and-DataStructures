#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,val,sum;
clrscr();
while(i<=10)
{
printf("\nENTER NO:");
scanf("%d",&val);
sum=sum+val;
printf("\nSUM=%d",sum);
i++;
}
getch();
}