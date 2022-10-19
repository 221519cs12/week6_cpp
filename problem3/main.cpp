#include "iostream"
using namespace std;

void circumference(float);
void area(float);

int main() {
  float radius = 0;
  cout << "Enter radius: ";
  cin >> radius;
  circumference(radius);
  area(radius);
}

void circumference(float radius) {
  cout << "Circumference: " << 2 * 3.14159 * radius << endl;
}

void area(float radius) {
  cout << "Area: " << 3.14159 * radius * radius << endl;
}