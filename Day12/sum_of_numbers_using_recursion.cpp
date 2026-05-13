#include <iostream>
using namespace std;

int Sum(int x) {
  if (x == 0) {
    return 0;
  }
  return (x % 10) + Sum(x / 10);
};

int main() {
  int n;
  cin >> n;
  cout << "Sum of digits of" << n << "is:" << Sum(n) << endl;
  return 0;
}