#include <iostream>
using namespace std;

void coffeeVolume(int shots = 1) {
  int volume = shots * 30;
  cout << "Total volume = " << volume << " ml" << endl;
}

int main() {
  coffeeVolume(3);
  coffeeVolume();
  return 0;
}