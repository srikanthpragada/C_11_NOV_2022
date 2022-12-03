// Program to print word per line
// Date : 03-DEC-2022

#include <stdio.h>
void main()
{
 char s1[50], s2[50];

       printf("Enter string 1 :");
       gets(s1);
       printf("Enter string 2 :");
       gets(s2);

       if( strcmp(s1, s2) > 0 )
          puts(s1);
       else
          puts(s2);
} // main


