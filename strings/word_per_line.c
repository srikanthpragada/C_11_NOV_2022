// Program to print word per line
// Date : 03-DEC-2022

#include <stdio.h>
void main()
{
 char st[50];
 int i;

       printf("Enter string :");
       gets(st);

       for(i = 0;  st[i] != '\0'; i ++)
       {
          if (isspace(st[i]))
              putch('\n');
          else
              putch(st[i]);
       }
} // main

