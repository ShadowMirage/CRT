#include <iostream>
using namespace std;

class Largest {
public:
  void check(int m, int n, int o) {
    int a;

    if (m > n && m > o) {
      a = m;
    } else if (n > o) {
      a = n;
    } else {
      a = o;
    }

    cout << a;
  }
};

int main() {
  int m, n, o;

  cout << "Enter first number:" << endl;
  cin >> m;

  cout << "Enter second number:" << endl;
  cin >> n;

  cout << "Enter third number:" << endl;
  cin >> o;

  Largest obj;
  obj.check(m, n, o);

  return 0;
}