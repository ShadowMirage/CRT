#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }

int main() {
  int result = add(5, 6);
  cout << result;
  return 0;
}