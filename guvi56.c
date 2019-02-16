#include<stdio.h>
#include<conio.h>
void main()
{
char s[300];
int k=0,i,cou=0,des=0;
clrscr();
gets(s);
while(s[k]!='\0')
{
k++;
cou++;
}
for(i=0;i<cou;i++)
{
if((s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')&&(s[i]>=47 && s[i]<=56))
{
des=0;
}
else if(s[i]=='_')
{
des=1;
break;
}
}
if(des==1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}


