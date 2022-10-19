#include <iostream>
using namespace std;

int main() {
  float arr[4] = {1.1, 2.2, 3.3, 4.4};
  int legnth = sizeof(arr) / sizeof(arr[0]);
  cout << arr[legnth - 1] << endl;
}