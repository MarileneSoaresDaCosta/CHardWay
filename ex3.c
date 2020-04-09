#include<stdio.h>

int main()
{
  int age = 10;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  const double RENT = 3852.99;

  printf("rent: \n");
  printf("%f\n", RENT);
  printf("%f*\n", RENT);
  printf("%4.2f\n", RENT);
  printf("%10.6f\n", RENT);

  const double PAY = -939.55;
  printf("PAY: \n");
  printf("%f\n", PAY);
  printf("%f*\n", PAY);
  printf("%4.2f\n", PAY);
  printf("%10.6f\n", PAY);

  return 0;
}
