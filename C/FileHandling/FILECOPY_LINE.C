#include<stdio.h>
#include<conio.h>
void main()
{
char f1[20],f2[20];
FILE *fp,*fq;
char line[100];
clrscr();

printf("ENTER FILE 1:");
gets(f1);

printf("ENTER FILE 2:");
gets(f2);

fp = fopen(f1,"r");
fq = fopen(f2,"w");

while(!feof(fp))
{
fgets(line,80,fp);
fputs(line,fq);

}

fclose(fp);
fclose(fq);

getch();
}