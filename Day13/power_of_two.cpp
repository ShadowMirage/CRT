#include <iostream>
using namespace std;

bool power(int num) {
  if (num == 0) {
    return false;
  }
  if (num == 1) {
    return true;
  }
  return power(num % 2 == 0) && power(num / 2);
};

int main() {
  int t;
  cin >> t;
  int n;
  while (t--) {

    cout << "Enter the number: ";
    cin >> n;
    bool result = power(n);

    if (result)
      cout << n << " is a power of 2." << endl;
    else
      cout << n << " is not a power of 2." << endl;
  }
  return 0;
}