// Assignments for 05-DEC

double area(int radius)
{
   return 3.14 * radius * radius;
}

int nodays(int month, int year)
{
   switch(month)
   {
      case 2 : if(year % 4 == 0)
                  return 29;
               else
                  return 28;
      case 4:
      case 6:
      case 9:
      case 11: return 30;
      default: return 31;
   }
}

int sum_of_array(int a[10])
{
  int total = 0, i;

      for(i = 0; i < 10; i ++)
         total += a[i];

      return total;
}

int count_upper(char st[30])
{
  int count = 0, i;

      for(i = 0; st[i] != '\0'; i ++)
      {
         if(isupper(st[i]))
            count ++;
      }

      return count;
}

void main()
{
    printf("Count upper = %d\n", count_upper("AbcXyzPQR"));
    printf("No of days  = %d\n", nodays(10,2022));
}
