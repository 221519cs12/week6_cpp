#include <iostream>
using namespace std;

int factorial(int);

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  factorial(num);
}

int factorial(int num) {
  int fact = 1;
  for (int i = 1; i <= num; ++i) {
    fact *= i;
  }
  cout << "Factorial: " << fact << endl;
}