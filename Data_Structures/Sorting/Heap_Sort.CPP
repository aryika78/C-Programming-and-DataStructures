#include <stdio.h>
#include <conio.h>

int k[10],n;
void Create_heap();
void Heap_sort();

void main()
{
int i;
clrscr();
printf("\nEnter number of elements : ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
	printf("\nEnter number : ");
	scanf("%d",&k[i]);
}
Heap_sort();
printf("\nSorted Array : ");
for (i=1;i<=n;i++)
{
	printf("\n%d",k[i]);
}
getch();
}


void Create_heap()
{
int q=2; //Started from 2 because it is assumed that first node is already there.
int i,key,j;

while(q<=n)
{
	i = q;
	key = k[q];
	j = i/2;
	while(i>1 && key > k[j])
	{
		k[i] = k[j];
		i = j;
		j = i/2;
		if (j<1)
		{
			j = 1;
		}
	}
k[i] = key;
q++;
}
}

void Heap_sort()
{
int temp;
Create_heap();
printf("\nDispalying Max Heap : ");
for (int h=1;h<=n;h++)
{
	printf("\n%d",k[h]);
}

int q = n;
int i,key,j;
while (q>=2)
{
	temp = k[1];
	k[1] = k[q];
	k[q] = temp;

	i =1;
	key = k[1];
	j = 2;
	if (j+1 < q)//this condition identifies largest of two child of its parent
	{
		if (k[j+1] > k[j])
		{
			j = j+1;
		}
	}

	while(j <= q-1 && k[j] > key)
	{
		k[i] = k[j];
		i = j;
		j = 2*i;
		if(j+1 < q)
		{
			if(k[j+1]>k[j])
			{
				j = j + 1;
			}
		}
		else if(j > n)
		{
			j = n;
		}
		k[i] = key;
	}
q--;
}
}