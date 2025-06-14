#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],c;
int i,j,l;
clrscr();

printf("ENTER STRING:");
gets(a);

for(l=0;a[l]!=NULL;l++);

for(i=0;a[i]!=NULL;i++)
{
	for(i=0,j=i+1;i<=l,j<=l;i++,j++)
	{
		if(a[i]>a[j])
		{
		c=a[i];
		a[i]=a[j];
		a[j]=c;
		}
	}
}

printf("\n\n %s",a);
getch();
}