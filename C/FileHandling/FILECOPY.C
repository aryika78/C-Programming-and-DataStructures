#include<stdio.h>
#include<conio.h>
void main()
{
char f1[20],f2[20],ch;
FILE *fr,*fw;
clrscr();

printf("ENTER NAME OF FILE 1:");
gets(f1);

printf("ENTER NAME OF FILE 2:");
gets(f2);

fr=fopen(f1,"r");
fw=fopen(f2,"a");

while(ch!=EOF)
{
ch=getc(fr);
putc(ch,fw);
}

fclose(fr);
fclose(fw);

printf("\n\n FILE COPIED");

getch();
}