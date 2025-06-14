#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,k;
clrscr();
	//taking user input
	for(i=0;i<10;i++)
	{
		printf("ENTER NO:");
		scanf("%d",&a[i]);
	}

for(i=9;i>=0;i--) //outer loop [to reduce number passes by 1]
{
	for(j=0;j<i;j++) //inner loop to compare two values
	{
		if(a[j] > a[j+1])
		{
		//swapping two element
		k=a[j];
		a[j]=a[j+1];
		a[j+1]=k;
		}//end of if
	} //end ofinnerloop
}//end of outerloop

//printing sorted elements
for(i=0;i<10;i++)
{
	printf(" %d",a[i]);
}
getch();
}