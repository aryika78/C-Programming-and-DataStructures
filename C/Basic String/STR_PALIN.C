#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,j,l,f=0;
clrscr();

printf("ENTER STRING:");
gets(a);

for(l=0;a[l]!=NULL;l++);

for(i=0,j=l-1;i<l/2;i++,j--)
{
	if(a[i]!=a[j])
	{
	f=1;
	break;
	}
}

if(f==1)
{
printf("NOT PALINDROME");
}
else
{
printf("PALINDROME");
}

getch();
}