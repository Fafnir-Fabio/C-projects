#include <stdio.h>

int main(void)
{
  char operator;
  float num1, num2, result;

  printf("simple calculator \n");
  printf("Enter a operator: (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter the first number: ");
  scanf("%f", &num1);
  printf("Enter the second number: ");
  scanf("%f", &num2);

  switch (operator) {
  case '+':
    result = num1 + num2;
    printf("%2.lf + %2.lf = %2.lf", num1, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("%2.lf - %2.lf = %2.lf", num1, num2, result);
    break;
  case '*':
    result = num1 * num2;
    printf("%2.lf * %2.lf = %2.lf", num1, num2, result);
    break;
  case '/':
    if (num2 != 0) {
    result = num1 / num2;
    printf("%2.lf / %2.lf = %2.lf", num1, num2, result);
    break;
    } else {
    printf("\n Cant divide by zero");
    }

  }
  return 0;
}
