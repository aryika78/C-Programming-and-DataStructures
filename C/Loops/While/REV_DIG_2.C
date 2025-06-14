#include<stdio.h>
#include<conio.h>
void main()
{
int no,r,rev=0;
clrscr();
printf("ENTER NO:");
scanf("%d",&no);
while(no>=1)
{
r=no%10;
rev=(rev*10)+r;
no=no/10;
}
printf("%d",rev);
getch();
}