

void reverse(int num)
{
   while(num > 0)
   {
      printf("%d", num % 10);
      num = num / 10;
   }
}

// Using recursion
void reverse2(int num)
{
    if(num > 0)
    {
      printf("%d", num % 10);
      reverse2(num / 10); // recursion
    }
}

void main()
{
   reverse2(123);
}
