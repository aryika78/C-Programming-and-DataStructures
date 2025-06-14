#include<stdio.h>
#include<conio.h>
void main()
{
int no,r;
clrscr();
printf("ENTER NO:");
scanf("%d",&no);
while(no>=1)
{
r=no%10;
printf("%d",r);
no=no/10;
}
getch();
}