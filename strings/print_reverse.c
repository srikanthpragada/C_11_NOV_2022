// Program to print a string in reverse
// Date : 03-DEC-2022

#include <stdio.h>
void main()
{
 char st[50];
 int i;

       printf("Enter string :");
       gets(st);

       for(i = strlen(st) - 1; i >= 0 ; i --)
       {
           putch(st[i]);
       }
} // main

