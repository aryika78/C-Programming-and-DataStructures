#include<stdio.h>
#include<conio.h>
void main()
{
char na[30],t;
int i,j,l=0;
char *p;
p=na;
clrscr();

printf("ENTER STRING:");
gets(p);

l=strlen(p);

for(i=0,j=l-1;i<l/2;i++,j--)
{
t=*(p+i);
*(p+i)=*(p+j);
*(p+j)=t;
}
printf("\n\n %s",p);


getch();
}