// Program to take a price and qty and display net amount
// Date : 22-NOV-2022

#include <stdio.h>
void main()
{
  int price, qty, amount, discount, net_amount;

      printf("Enter price :");
      scanf("%d", &price);

      printf("Enter qty :");
      scanf("%d", &qty);

      amount = price * qty;

      if(price > 10000)
         discount = amount * 20 / 100;
      else
         discount = amount * 10 / 100;

      net_amount = amount - discount;

      if (net_amount > 50000)
          net_amount = net_amount * 95 / 100;

      printf("Net Amount : %d", net_amount);
}
