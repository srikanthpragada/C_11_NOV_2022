// Program to take price and display net price using discount @ 15%
// Date : 17-NOV-2022

#include <stdio.h>
void main()
{
  int price, discount, net_price; // variables

      // input
      printf("Enter a price :");
      scanf("%d", &price);

      // process
      discount = price * 15 / 100;
      net_price = price - discount;

      // output
      printf("Price        : %5d\n", price);
      printf("- Discount   : %5d\n", discount);
      printf("Net price    : %5d", net_price);
}
