// Program to take 8 char and display whether it is valid password
// Date : 29-NOV-2022

#include <stdio.h>
void main()
{
 char ch;
 int i, upper = 0, digit = 0;

       printf("Enter password :");
       for(i = 1; i <= 8; i ++)
       {
         ch = getch();
         putch('*');
         if(isupper(ch))
             upper = 1;
         else
            if(isdigit(ch))
               digit = 1;
       } // for

       if (upper && digit)
           printf("\nValid password");
       else
           printf("\nInvalid password");

} // main

