// Program to take 2 numbers and display total and average
// Date : 17-NOV-2022

#include <stdio.h>
void main()
{
  int n1, n2, total;
  float avg;

      // input
      printf("Enter two numbers :");
      scanf("%d%d", &n1,&n2);

      // process
      total = n1 + n2;
      avg = total / 2.0;

      // output
      printf("Total   = %d\n", total);
      printf("Average = %.2f", avg);
}
