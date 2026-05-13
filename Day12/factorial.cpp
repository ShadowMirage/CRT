#include <iostream>
using namespace std;

int Fac(int x) {
  // base case
  if (x == 1)
    return 1;

  return x * Fac(x - 1);
}

int main() {
  int x;
  cout << "Enter N:" << endl;
  cin >> x;
  cout << "Factorial of N is:" << Fac(x) << endl;
  return 0;
}