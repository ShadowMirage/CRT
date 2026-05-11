#include <iostream>
using namespace std;

class Even {
public:
  void check(int n) {
    if (n % 2 == 0)
      cout << "Even";
    else
      cout << "Odd";
  }
};

int main() {
  int n;
  cin >> n;

  Even obj;
  obj.check(n);

  return 0;
}