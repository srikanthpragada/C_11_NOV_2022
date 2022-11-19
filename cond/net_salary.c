// Program to take basic salary and display net salary
// Date : 19-NOV-2022

#include <stdio.h>
void main()
{
  int salary, hra, da, net_salary;

      printf("Enter salary :");
      scanf("%d", &salary);

      if(salary > 50000)
      {
         hra = salary * 30 / 100;
         da = salary * 20 / 100;
      }
      else
      {
         hra = salary * 25/ 100;
         da = salary * 15 / 100;
      }

      net_salary = salary + hra + da;
      printf("Net salary : %d", net_salary);
}
