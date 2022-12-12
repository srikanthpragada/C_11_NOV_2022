#include <stdio.h>

void main()
{
  FILE * fp;
  int  ch;
  char fn[30];

     printf("Enter filename :");
     gets(fn);

     fp = fopen(fn,"rt");
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file!!", fn);
         exit(1);
     }

     while(1)
     {
         ch = fgetc(fp);
         if (ch == EOF)  // end of file
            break;

         putch(ch);
     }

     fclose(fp);

     fgets
}
