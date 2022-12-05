// Program to create a function to print array
// Date : 05-DEC-2022

#include <stdio.h>

void print_array(int a[5])
{
 int i;

   for(i = 0; i < 5; i ++)
      printf("%5d", a[i]);
}

void main()
{
 int arr[] = {1,2,3,4,5};
 int marks[] = {51,62,33,54,75};

   print_array(arr);
   putch('\n');
   print_array(marks);

} // main



