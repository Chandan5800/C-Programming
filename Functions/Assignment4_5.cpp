#include<stdio.h>
int multiply(int n1, int n2);
int main()
{
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
  return 0;
}
  int multiply(int n1, int n2)
{
  int result;
  result = n1 * n2;
  return result;
}


