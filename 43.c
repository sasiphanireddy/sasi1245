#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j=0,k,l,h;
    printf("enter the name \n");
    gets(a);
    printf("enter the name \n");
    gets(b);
    k=strlen(a);
    l=strlen(b);
    h=k+l;
    for(i=k;i<h;i++)
    {
        a[i]=b[j];
        j++;
    }
    printf("%s",a);
    

    return 0;
}
