#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,sp,ep;
clrscr();

printf("ENTER STRING:");
gets(a);

printf("ENTER START POS:");
scanf("%d",&sp);

printf("ENTER END POS:");
scanf("%d",&ep);

for(i=sp+1;i<ep;i++)
{
printf("%c",a[i]);
}
getch();
}