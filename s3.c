#include<stdio.h>
main()
{
   char ch;
 
  printf("Enter a character\n");
  scanf("%c", &ch);
   if (ch == 'a' || ch == 'e' ||  ch == 'i' || ch == 'o' || ch == 'u')
    printf("%c is a vowel.\n", ch);
  else
    printf("%c isn't a vowel.\n", ch);
     
  return 0;
}
}
