#include<stdio.h>
#include<conio.h>
void main()
{
char na[30];
int i;
clrscr();
printf("ENTER STRING:");
gets(na);

printf("\n\n %s\n\n ",na);
/*
for(i=0;na[i]!=NULL;i++)
{
printf("\n %c",na[i]);
}*/
for(i=0;na[i]!=NULL;i++);//imp(here ; is used becauseno fn to be per, only length is to be found.)
printf("\n\nlength=%d",i);
getch();
}