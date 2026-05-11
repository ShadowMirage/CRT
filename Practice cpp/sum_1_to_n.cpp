#include <iostream>
using namespace std;

class Sum {
public:
  int sum1 = 0;

  int calculate(int n) {
    for (int i = 1; i <= n; i++) {
      sum1 += i;
    }
    return sum1;
  }
};

int main() {
  int n;
  cin >> n;

  Sum obj;
  cout << obj.calculate(n);

  return 0;
}