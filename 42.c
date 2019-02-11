#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j,k,l;
    printf("enter the name \n");
    gets(a);
    printf("enter the name \n");
    gets(b);
    k=strlen(a);
    l=strlen(b);
    if(l==k)
    {
        printf("%s",a);
    }
    if(k>l)
    {
        printf("%s",a);
    }
    if(l>k)
    {
        printf("%s",b);
    }
    

    return 0;
}
