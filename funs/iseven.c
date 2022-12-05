// Program to create a function to true if number is even otherwise false
// Date : 05-DEC-2022

#include <stdio.h>

int iseven(int n)
{
  if(n % 2 == 0)
    return 1; // true
  else
    return 0; // false
}

void main()
{
     if(iseven(10))
        printf("Even");
     else
        printf("Odd");
} // main



