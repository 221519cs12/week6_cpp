#include <iostream>

int sum(int, int);

using namespace std;

int main(int argc, char const **argv)
{
  int a, b;
  cout << "Enter first num: ";
  cin >> a;
  cout << "Enter second num: ";
  cin >> b;
  cout << sum(a, b);
  return 0;
}

int sum(int a, int b) {
  return a + b;
}