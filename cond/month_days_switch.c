// Program to take month and display no. of days
// Date : 21-NOV-2022

#include <stdio.h>
void main()
{
  int month, year;

      printf("Enter month number :");
      scanf("%d", &month);

      switch(month)
      {
          case 2 : printf("28");
                   break;
          case 4 :
          case 6 :
          case 9 :
          case 11: printf("30"); break;
          default: printf("31");
      }

}
