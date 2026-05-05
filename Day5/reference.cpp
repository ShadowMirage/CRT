#include <iostream>
using namespace std;

void applydiscount(float &bill) {
  float discounted = bill * 0.10;
  bill = bill - discounted;
  cout << "Discounted bill amount is" << bill << endl;
}

int main() {
  float amount;
  cout << "Enter bill amount" << endl;
  cin >> amount;

  applydiscount(amount);
  cout << "Updated bill in main = " << amount << endl;

  return 0;
}