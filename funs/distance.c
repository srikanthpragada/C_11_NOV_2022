// Program to create a function to true if number is even otherwise false
// Date : 05-DEC-2022

#include <stdio.h>

float distance(int x1, int y1, int x2, int y2)
{
 int d1,d2;

      d1 = x2 - x1;
      d2 = y2 - y1;
      return sqrt(d1 * d1 + d2 * d2);
}

void main()
{
float d;

     d = distance(10, 20, 20, 25);
     printf("Distance = %f\n", d);
     d = distance(10, 20, 14, 26);
     printf("Distance = %f\n", d);

} // main



