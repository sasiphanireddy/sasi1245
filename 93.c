#include<stdio.h>
main()
{
    char a[30],b[30],c[30];
    int i,j=0,k=0;
    printf("enter the string \n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2!=0)
        {
            b[j]=a[i];
            j++;
            
        }   
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("%s",b);
    printf("%s",c);
    return 0;
}
