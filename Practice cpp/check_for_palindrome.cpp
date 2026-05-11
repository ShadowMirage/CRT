#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number:" << endl;
  cin >> n;

  int original = n;

  int reverse = 0;

  while (n > 0) {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }
  if (reverse == original) {
    cout << "It is a Palindrome";
  } else {
    cout << "It is not a Palindrome";
  }
  return 0;
}