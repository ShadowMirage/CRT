#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter a number: ";
  cin >> n;

  cout << "Numbers from 1 to " << n - 1 << " are: ";

  int i = 1;
  while (i != n) {
    cout << i << " ";
    i++;
  }

  return 0;
}