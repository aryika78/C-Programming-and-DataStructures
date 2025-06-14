#include<stdio.h>
#include<conio.h>
void main()
{
int amt,n;
clrscr();
printf("ENTER AMOUNT:");
scanf("%d",&amt);
n=amt/2000;
printf("\n NO OF 2000 NOTES IS=%d",n);
printf("\n %d*%d=%d",n,2000,n*2000);
amt=amt%2000;
n=amt/500;
printf("\n NO OF 500 NOTES IS=%d",n);
printf("\n %d*%d=%d",n,500,n*500);
amt=amt%500;
n=amt/200;
printf("\n NO OF 200 NOTES IS=%d",n);
printf("\n %d*%d=%d",n,200,n*200);
amt=amt%200;
n=amt/100;
printf("\n NO OF 100 NOTES IS=%d",n);
printf("\n %d*%d=%d",n,100,100*n);
getch();
}
