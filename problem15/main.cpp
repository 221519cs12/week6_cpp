#include "./header.h"
#include "libs.cpp"
int main() {
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  sum(num1, num2);
  subtract(num1, num2);
  multiply(num1, num2);
  divide(num1, num2);
  return 0;
}