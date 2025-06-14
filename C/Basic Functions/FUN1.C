#include<stdio.h>
#include<conio.h>

int add(int,int);//declaration of funtion
int sub(int,int);
int mul(int,int);
double div(int,int);

void main()
{
int a,b,c;
double p;
clrscr();
printf("ENTER 2 NO:");
scanf("%d %d",&a,&b);

c=add(a,b); //call of fun

printf("\n\n ADD=%d",c);

c=sub(a,b);

printf("\n\n SUB=%d",c);

c=mul(a,b);

printf("\n\n MUL=%d",c);

p=div(a,b);
printf("\n\n DIV=%lf",p);

getch();

}

int add(int x,int y)//body of fun
{
int z;
z=x+y;
return z;
}

int sub(int x,int y)
{
int z;
z=x-y;
return z;
}

int mul(int x,int y)
{
int z;
z=x*y;
return z;
}
double div(int x,int y)
{
double z;
z=x/y;
return z;
}