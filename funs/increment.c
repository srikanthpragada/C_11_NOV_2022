// Pass by value

void increment(int num)
{
   num ++;
}

void main()
{
  int a = 10;

     increment(a);
     printf("%d ", a);

}
