#include<stdio.h>
#include<conio.h>

void main()
{
int a[50],i=0,j=0,n,count=1,k;
clrscr();
printf("\n\n Enter number of elements:");
scanf("%d",&n);


for(i=0;i<n;i++)
{
printf("\n\n Enter element:");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			count++;
			for(k=j;k<n-1;k++)
			{
				a[k]=a[k+1];
			}
			n--;
			j--;
		}
	}
	printf("\n\nNUMBER=%d",a[i]);
	printf("\n Count=%d",count);
	count=1;
}

getch();
}