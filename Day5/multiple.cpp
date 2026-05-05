#include <iostream>
using namespace std;

int getCoffeeVolume(int shots) { return shots * 30; }

int main() {
  int shots;
  cout << "Enter number of coffee shots: ";
  cin >> shots;

  int total = getCoffeeVolume(shots);

  cout << "Total coffee volume = " << total << " ml";
  return 0;
}