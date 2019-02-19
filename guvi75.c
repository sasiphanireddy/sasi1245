#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i=0,cou=0,n=0,b=0;
gets(a);
while(a[i]!='\0')
{

i++;
cou++;
}
if(cou%2==0)
{

a[cou/2]='*';
a[(cou/2)-1]='*';
}
else
{

a[cou/2]='*';
}
for(i=0;i<cou;i++)
{
printf("%c",a[i]);
}
getch();
}
