#include<stdio.h>
#include<conio.h>
void main()
{
char a[50],vow=0,con=0;
int i;
clrscr();

printf("ENTER STRING:");
gets(a);

for(i=0;a[i]!=NULL;i++)
{

	if(a[i]>=65&&a[i]<=90)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
		vow++;
		}
		else
		{
		con++;
		}
	}
}
	printf("VOWEL=%d",vow);
	printf("\n\nCONSONENT=%d",con);


getch();
}