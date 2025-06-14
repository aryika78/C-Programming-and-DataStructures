#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=1;
clrscr();
printf("ENTER NO:");
scanf("%d",&a);
while(b<=10)
{
printf("\n%d*%d=%d",a,b,a*b);
b++;
}
getch();
}