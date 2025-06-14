#include<stdio.h>
#include<conio.h>

struct emp
{
int id;
char na[20];
long int sal;
}e;

void main()
{
int i;
FILE *fp;
clrscr();
fp=fopen("data.txt","w");

for(i=0;i<=5;i++)
{
printf("ENTER ID NAME SALARY:");
scanf("%d %s %ld",&e.id,e.na,&e.sal);
fprintf(fp," %d %s %ld",e.id,e.na,e.sal);//give space before after format specifier
}

fclose(fp);

fp=fopen("data.txt","r");

for(i=0;i<=5;i++)
{
fscanf(fp,"%d %s %ld",&e.id,e.na,&e.sal);
printf(" %d %s %ld",e.id,e.na,e.sal);
}

fclose(fp);
getch();
}