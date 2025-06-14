#include<stdio.h>
#include<conio.h>

void main()
{
char f1[20],f2[20],ch;
FILE *fr,*fw;
clrscr();

printf("ENTER FILE 1:");
gets(f1);

printf("ENTER FILE 2:");
gets(f2);

fr=fopen(f1,"r");
fw=fopen(f2,"w");

while(ch!=EOF)
{
ch=getc(fr);


if(ch>=65&&ch<=90)
{
ch=ch+32;
}
else if(ch>=97&&ch<=122)
{
ch=ch-32;
}
putc(ch,fw);
}

fclose(fr);
fclose(fw);

getch();
}