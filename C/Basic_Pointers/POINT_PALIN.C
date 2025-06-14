#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
char *p;
int i,j,l,f=0;

p=a;

clrscr();

printf("ENTER STRING:");
gets(p);

for(l=0;*(p+l)!=NULL;l++);

for(i=0,j=l-1;i<l/2;i++,j--)
{
	if(*(p+i)!=*(p+j))
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