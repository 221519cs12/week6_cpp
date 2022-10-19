#include <iostream>
using namespace std;

int sum(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main() {
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  sum(num1, num2);
  subtract(num1, num2);
  multiply(num1, num2);
  divide(num1, num2);
}

int sum(int num1, int num2) {
  cout << "Sum: " << num1 + num2 << endl;
}

int subtract(int num1, int num2) {
  cout << "Subtract: " << num1 - num2 << endl;
}

int multiply(int num1, int num2) {
  cout << "Multiply: " << num1 * num2 << endl;
}

int divide(int num1, int num2) {
  cout << "Divide: " << num1 / num2 << endl;
}