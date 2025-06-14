#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[30];
int len;
clrscr();

printf("ENTER STRING:");
gets(str);

len=strlen(str);

printf("Length of %s is %d",str,len);

getch();
}