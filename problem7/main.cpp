#include <iostream>
using namespace std;

int max(int, int, int);
int min(int, int, int);

int main() {
  int num1, num2, num3;
  cout << "Enter three numbers: ";
  cin >> num1 >> num2 >> num3;
  max(num1, num2, num3);
  min(num1, num2, num3);
}

int max(int num1, int num2, int num3) {
  int max = num1;
  if (num2 > max) {
    max = num2;
  }
  if (num3 > max) {
    max = num3;
  }
  cout << "Max: " << max << endl;
}

int min(int num1, int num2, int num3) {
  int min = num1;
  if (num2 < min) {
    min = num2;
  }
  if (num3 < min) {
    min = num3;
  }
  cout << "Min: " << min << endl;
}