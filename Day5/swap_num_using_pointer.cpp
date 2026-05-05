#include <iostream>
using namespace std;

void swapnum(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int num1;
  int num2;
  cout << "Enter the first number" << endl;
  cin >> num1;
  cout << "Enter the second number" << endl;
  cin >> num2;

  swapnum(&num1, &num2);

  cout << "After swapping:" << endl;
  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;

  return 0;
}