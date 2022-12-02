// Program to validate mobile number
// Date : 02-DEC-2022

#include <stdio.h>
void main()
{
 char mobile[15];
 int i, count = 0, valid = 1;

       printf("Enter mobile number :");
       gets(mobile);

       for(i = 0; mobile[i] != '\0' ; i ++)
       {
           if (isdigit(mobile[i]))
              count ++;
           else{
              valid = 0; // invalid as non-digit encountered
              break;
           }
       }

       if(valid && count == 10)
         printf("Valid Mobile Number");
       else
         printf("Invalid Mobile Number");
} // main

