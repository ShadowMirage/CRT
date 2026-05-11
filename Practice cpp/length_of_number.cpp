#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number:" << endl;
  cin >> n;

  int len = 0;

  while (n > 0) {
    int digit = n % 10;
    len += 1;
    n = n / 10;
  }
  cout << len;
  return 0;
}