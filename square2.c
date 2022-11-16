// Program to print square of a number taken from user
// Date : 16-NOV-2022

#include <stdio.h>

void main()
{
  int num, square; // variables

      // input
      printf("Enter a number :");
      scanf("%d", &num);

      // process
      square = num * num;

      // output
      printf("Square of %d is %d", num, square);
}
