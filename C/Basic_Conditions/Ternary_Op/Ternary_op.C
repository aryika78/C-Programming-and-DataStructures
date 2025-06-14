#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("ENTER AN ALPHABET IN UPPER CASE:");
scanf("%c",a);
(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')?printf("VOWEL"):printf("CONSONENT");
getch();
}