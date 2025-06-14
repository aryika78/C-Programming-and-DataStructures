#include<stdio.h>
#include<conio.h>

int power(int,int);
void main()
{
int a,b,p=1;
clrscr();

printf("ENTER 2 NO:");
scanf("%d %d",&a,&b);

p=power(a,b);
printf("\n\n POWER=%d",p);

getch();
}
int power(int a,int b)
{
int i=1,p=1;
while(i<=b)
{
p=p*a;
i++;
}
return p;
}
