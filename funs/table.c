// Program to create a function to print table
// Date : 05-DEC-2022

#include <stdio.h>

void table(int num, int len)
{
 int i;

   for(i = 1; i <= len; i ++)
      printf("%3d * %2d = %5d\n", num, i, num * i);
}

void main()
{

   table(15, 10);

} // main


