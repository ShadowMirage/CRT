#include <iostream>
using namespace std;

int Power(int n, int p) {
  int result = 1;

  for (int i = 1; i <= p; i++) {
    result *= n;
  }

  return result;
};

int main() {
  int n;
  cout << "Enter N:";
  cin >> n;
  int p;
  cout << "Enter P:";
  cin >> p;
  cout << "Power of n is:" << Power(n, p) << endl;
  return 0;
}