#include<stdio.h>
#include<conio.h>
void main()
{
float c,a;
clrscr();
printf("ENTER NO. OF CALLS:");
scanf("%f",&c);
if(c<=100)
{
printf("FREE!");
}
else if(c>=100&&c<=300)
{
a=(c-100)*0.5;
printf("\nAMT=%f",a);
}
else if(c>=300&&c<=500)
{
a=(c-300)*1+100;
printf("\n AMT=%f",a);
}
else if(c>500)
{
a=(c-500)*1.5+300;
printf("\nAMT=%f",a);
}
getch();
}