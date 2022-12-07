// Pass by address/reference

void increment(int * p)
{
    *p = *p + 1;
}

void main()
{
  int a = 10;

     increment(&a);  // pass by address
     printf("%d ", a);

}
