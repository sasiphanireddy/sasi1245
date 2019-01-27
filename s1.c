#include <stdio.h>
int main()
{
   int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        if (number == 0)
            printf("You entered 0 ");
        else
            printf("You entered a negative numbe");
    }
    else
        printf("You entered a positive number");
    return 0;
}
