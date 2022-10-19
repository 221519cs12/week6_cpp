#include "header.h"

int factorial(int num) {
  int fact = 1;
  for (int i = 1; i <= num; ++i) {
    fact *= i;
  }
  cout << "Factorial: " << fact << endl;
}