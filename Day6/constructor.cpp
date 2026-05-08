#include <iostream>
using namespace std;

class Student {
public:
  string name;

  Student() { name = "Default Name"; }
};

int main() {
  Student s;
  cout << s.name;
  return 0;
}