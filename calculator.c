#include <stdio.h>

int main() {
  char operator;
  float num1, num2, result;

  printf("Enter operator (+, -, *, /): ");
  scanf(" %c", &operator);

  printf("Enter first number: ");
  scanf("%f", &num1);

  printf("Enter second number: ");
  scanf("%f", &num2);

  switch (operator) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      printf("Error! Division by zero is not allowed.\n");
    } else {
      result = num1 / num2;
    }
    break;
  default:
    printf("Error! Invalid operator.\n");
    return 1; // Exit with error
  }

  printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

  return 0;
}