#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  int  ch;
  char fn[30];


     fp = fopen(argv[1],"rt");
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file!!", argv[1]);
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
}
