#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y;
clrscr();
printf("ENTER DATE:");
scanf("%d,%d,%d",&d,&m,&y);

if(m==1||3||5||7||8||10||12)
{
if(d>=1&&d<=31)
{
printf("valid");
}
else
{
printf("invalid");
}
}
getch();
}