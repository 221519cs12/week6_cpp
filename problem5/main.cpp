#include <iostream>
using namespace std;

void prime_or_not(int);

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  prime_or_not(num);
}

void prime_or_not(int num) {
  bool isPrime = true;
  for (int i = 2; i <= num / 2; ++i) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }
  if (isPrime) {
    cout << "Prime" << endl;
  } else {
    cout << "Not prime" << endl;
  }
}