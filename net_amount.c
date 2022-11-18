// Program to take price and qty and display net amount
// Date : 18-NOV-2022

#include <stdio.h>
void main()
{
  int price, qty, discount, after_discount, tax, amount, net_amount; // variables

      // input
      printf("Enter a price :");
      scanf("%d", &price);

      printf("Enter a qty :");
      scanf("%d", &qty);

      // process
      amount = price * qty;
      discount = amount * 12 / 100;
      after_discount  = amount - discount;
      tax = after_discount * 8 / 100;
      net_amount = after_discount + tax;

      // output
      printf("Amount        : %5d\n", amount);
      printf("- Discount    : %5d\n", discount);
      printf("After Discount: %5d\n", after_discount);
      printf("+ Tax         : %5d\n", tax);
      printf("Net Amount    : %5d\n", net_amount);
}
