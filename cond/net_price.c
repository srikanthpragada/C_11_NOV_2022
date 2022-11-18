// Program to take a price and display net price
// Date : 18-NOV-2022

#include <stdio.h>
void main()
{
  int price, discount, net_price;

      printf("Enter price :");
      scanf("%d", &price);

      if(price > 1000)
         discount = price * 20 / 100;
      else
         discount = price * 10 / 100;

      net_price = price - discount;
      printf("Net price : %d", net_price);
}
