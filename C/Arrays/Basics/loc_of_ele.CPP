#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],n,i,s;
clrscr();

printf("ENTER NO OF ELEMENTS OF ARRAY:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("ENTER NO:");
scanf("%d",&a[i]);
}

printf("ENTER NO TO SEARCH:");
scanf("%d",&s);

for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("LOCATION=%d",i+1);
}
}
getch();
}