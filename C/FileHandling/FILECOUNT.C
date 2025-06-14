#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp;
char ch,na[20];
int u=0,l=0,s=0,d=0,ln=0,sc=0;
clrscr();

printf(" ENTER FILE NAME : ");
gets(na);

fp = fopen(na,"r");

if(fp==NULL)
{
printf("\n\n FILE NATHI ");
}
else
{
	while(ch!=EOF)
	{

	if(ch>=65&&ch<=90)
	{
	u++;
	}

	else if(ch>=97&&ch<=122)
	{
	l++;
	}

	else if(ch==32)
	{
	s++;
	}

	else if(ch>=48&&ch<=57)
	{
	d++;
	}

	else if(ch==13)
	{
	ln++;
	}

	else
	{
	sc++;
	}

	ch=getc(fp);
	printf("%c",ch);
	}
}

printf("\n UPPER CASE=%d",u);
printf("\n LOWER CASE=%d",l);
printf("\n SPACE=%d",s);
printf("\n DIGITS=%d",d);
printf("\n LINES=%d",ln);
printf("\n SPECIAL CHAR=%d",sc);

fclose(fp);
getch();
}