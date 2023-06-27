// swapping two numbers without useing third(temp) variable

#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter the two numbers : \n");
  scanf("%d %d", &a, &b);
  printf(" Original A is : %d and B is %d \n", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After A is : %d and B is : %d \n",a, b);
  return 0;
}
