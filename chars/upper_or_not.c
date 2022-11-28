// Program to take a char and display whether it is uppercase
// Date : 28-NOV-2022

#include <stdio.h>
void main()
{
 char ch;

       printf("Enter a char :");
       ch = getche();

       if(ch >= 'A' && ch <= 'Z')
         printf("Uppercase");
       else
         printf("Some other char");
}
