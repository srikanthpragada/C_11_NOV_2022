// write names into names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int  ch;

     fp = fopen("names.txt","rt");
     if(fp == NULL)
     {
         printf("Sorry! Could not open names.txt!");
         exit(1);
     }

     while(1)
     {
         ch = fgetc(fp);
         if (ch == EOF)
            break;

         putch(ch);
     }

     fclose(fp);
}
