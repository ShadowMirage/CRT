#include <iostream>
using namespace std;

void changeValue(int x) {
  x = x + 10;
  cout << "Inside call by value: " << x << endl;
}

void changeRef(int &x) {
  x = x + 10;
  cout << "Inside call by reference: " << x << endl;
}

int main() {
  int a = 10;

  cout << "Original value: " << a << endl;

  changeValue(a);
  cout << "After call by value: " << a << endl;

  changeRef(a);
  cout << "After call by reference: " << a << endl;

  return 0;
}