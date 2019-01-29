#include<stdio.h>
#include<conio.h>
void main()
{
    char a[30];
    int i,j=0,k=0,count=0,flag=0;
    printf("enter the string \n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    for(j=0;a[j]!='\0';j++)
    {
        if(a[i]==a[j])
        {
           k++; 
        }
    }
    if(count>1)
    {
        flag=1;
    }
    }
    if(flag==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    getch();
}
