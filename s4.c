#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if( (c>='a' && c<='z') )
        printf("%c is an alphabet",c);
    else
        printf("it is an number ");

    return 0;
}
