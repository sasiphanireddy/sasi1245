#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int e,i;
clrscr();
gets(s);
scanf("%d",&e);
for(i=0;i<e;i++)
{
printf("%c",s[i]);
}
getch();
}
