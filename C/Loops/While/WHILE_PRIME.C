#include <stdio.h>
#include <conio.h>

void main()
{
int no,i=2,f=0;
clrscr();

printf(" ENTER NO : ");
scanf("%d",&no);

while(i<no)
{
	if(no%i==0)
	{
	f=1;
	break;
	}
i++;
}

if(f==0)
{
printf("\n  %d IS A PRIME ",no);
}
else
{
printf("\n  %d IS NOT A PRIME ",no);
}


getch();
}

