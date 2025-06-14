#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("ENTER NO:");
scanf("%d",&no);
(no%2==0)?printf("\n\n EVEN"):printf("\n\n ODD");
getch();
}