#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;

public:
  string name;
  void setrollNo(int r) { rollNo = r; }
  void display() {
    cout << "Name:" << name << endl;
    cout << "Roll No:" << rollNo << endl;
  }
};

int main() {
  Student s;

  s.name = "Ram";
  s.setrollNo(101);

  s.display();
  return 0;
}