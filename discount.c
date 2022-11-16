// Program to price and display discount @ 15%
// Date : 16-NOV-2022

#include <stdio.h>
void main()
{
  int price, discount; // variables

      // input
      printf("Enter a price :");
      scanf("%d", &price);

      // process
      discount = price * 15 / 100;

      // output
      printf("Discount = %d", discount);
}
