

#include <stdio.h>

int main()
{
    char a[100];
    int i,j,k;
    printf("enter the name \n");
    gets(a);
    printf("enter the number  \n");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
    

    return 0;
}
