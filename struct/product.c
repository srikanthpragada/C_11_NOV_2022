
struct product {
   char name[20];
   int price, qty;
};

void main()
{
 struct product p1;

    p1.price = 100;
    p1.qty = 10;
    strcpy(p1.name, "Product 1");

    printf("%s %d %d", p1.name, p1.price, p1.qty);
}
