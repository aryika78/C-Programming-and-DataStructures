#include<stdio.h>
#include<conio.h>
void main()
{
int m1,m2,m3;
double per;
clrscr();
printf("ENTER 3 MARKS:");
scanf("%d,%d,%d",&m1,&m2,&m3);
per=(m1+m2+m3)/3;
printf("PER=%lf",per);
if(per>=70)
{
printf("\nDISTINCTION");
}
else if(per>=60)
{
printf("\nFIRST CLASS");
}
else if(per>=50)
{
printf("\nSEC CLASS");
}
else if(per>=40)
{
printf("\nPASS CLASS");
}
else
{
printf("\nFAIL");
}
getch();
}