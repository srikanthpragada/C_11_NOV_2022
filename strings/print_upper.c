// Program to print uppercase letters
// Date : 02-DEC-2022

#include <stdio.h>
void main()
{
 char st[50];
 int i;

       printf("Enter string :");
       gets(st);

       for(i = 0; st[i] != '\0' ; i ++)
       {
          if (isupper(st[i]))
              putch(st[i]);
       }

} // main

