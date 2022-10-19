#include <iostream>
using namespace std;

int rand_nums();

int main() {
  for(int i = 0; i < 10; i++)
  {
    rand_nums();
  }
}

int rand_nums()
{
  int num = rand() % 100 + 1;
  cout << num << endl;
}