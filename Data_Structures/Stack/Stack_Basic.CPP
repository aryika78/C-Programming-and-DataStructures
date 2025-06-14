#include <iostream.h>
#include <conio.h>

class stack
{
int st[5];
int top;
public:
stack()
{
top=-1;
}
void push()
{
	if(top==4)
	{
	cout <<"\n\n STACK OVERFLOW ";
	}
	else
	{
		cout <<"\n ENTER NUMBER : ";
		cin >> st[++top];
	}
}

void pop()
{
	if(top==-1)
	{
	cout <<"\n\n STACK UNDERFLOW ";
	}
	else
	{
		cout << "\n " << st[top--];
	}
}
};

void main()
{
stack s1;
int ch=0;

while(ch!=3)
{
cout <<"\n\n STACK MENU : ";
cout <<"\n 1.PUSH ";
cout <<"\n 2.POP ";
cout <<"\n 3.EXIT ";
cout <<"\n\n SELECT YOUR OPTION : ";
cin >> ch;

switch(ch)
{
case 1 : s1.push();  break;

case 2 : s1.pop();  break;

}
}

cout <<"\n\n THANKS FOR USING STACK : ";

getch();
}