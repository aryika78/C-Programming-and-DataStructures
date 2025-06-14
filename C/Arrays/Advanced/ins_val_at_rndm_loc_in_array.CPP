#include<stdio.h>
#include<conio.h>

void main()
{

int a[15],i,n,c,loc,val;
clrscr();

printf("NO OF ELEMENTS:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("ENTER NO:");
scanf("\n \n%d",&a[i]);
}

for(i=0;i<n;i++)
{
printf(" \n\n %d",a[i]);
}

printf("\n ENTER POSITION OF NEW ELEMENT:");
scanf("%d",&loc);

printf("ENTER VALUE OF NEW ELEMENT:");
scanf("%d",&val);

for(c=n-1;c>=loc-1;c--)
{
a[c+1]=a[c];
}

a[loc-1]=val;

for(i=0;i<n+1;i++)
{
printf("\n %d",a[i]);
}

getch();
}

