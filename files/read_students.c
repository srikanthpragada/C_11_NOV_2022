#include <stdio.h>
#define FILENAME  "students.dat"

struct student
{
    char name[30];
    int marks;
};

void main()
{
  FILE * fp;
  struct student s;
  int count;

     fp = fopen(FILENAME ,"rb");
     if(fp == NULL)
     {
         printf("Sorry! Could not open [%s] file!!", FILENAME);
         exit(1);
     }

     while(1)
     {
         count = fread(&s, sizeof(s), 1, fp);
         if(count == 0)  // EOF
            break;

         printf("%-30s - %2d\n", s.name, s.marks);
     }

     fclose(fp);

}
