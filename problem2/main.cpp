#include <iostream>
using namespace std;

float product(float, float);

int main() {
  float num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  cout << product(num1, num2) << endl;
}

float product(float str1, float str2) {
  return str1 * str2;
}