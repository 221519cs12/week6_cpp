#include <iostream>
using namespace std;

void even_or_odd(int);

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  even_or_odd(num);
}

void even_or_odd(int num) {
  if (num % 2 == 0) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }
}