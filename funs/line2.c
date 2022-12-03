// Program to print name with lines
// Date : 03-DEC-2022

#include <stdio.h>

void line(int len)
{
 int i;

   for(i = 1; i <= len ; i ++)
      putch('*');
}

void main()
{

   line(20);
   printf("\nSrikanth Technologies\n");
   line(30);

} // main


