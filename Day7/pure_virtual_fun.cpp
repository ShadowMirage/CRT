#include <iostream>

using namespace std;
class Player {
public:
  virtual void show() = 0;
};

class cricketers : public Player {

public:
  int a;

  void show() { cout << "Cricketer class show function" << endl; }
};

int main() {
  cricketers c1;
  c1.show();

  return 0;
}