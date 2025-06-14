#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp;
char ch,na[20];
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
	ch=getc(fp);
	printf("%c",ch);
	}
}

fclose(fp);
getch();
}