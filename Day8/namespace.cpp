#include <iostream>

using namespace std;

namespace Virat {
void show() { cout << "He is playing for " << endl; }
} // namespace Virat

namespace Rohit {
void show() { cout << "He is playing for MI" << endl; }
} // namespace Rohit

int main() {
  Virat ::show();
  Rohit ::show();
  return 0;
}