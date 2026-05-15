#include <iostream>
using namespace std;

class Stack {
private:
  int arr[100];
  int top;

public:
  Stack() { top = -1; }

  void push(int data) {
    if (top < 99) {
      top++;
      arr[top] = data;
    } else {
      cout << "Stack overflow" << endl;
    }
  }
  void display() {
    if (top == -1) {
      cout << "Stack is empty" << endl;
      return;
    }
    for (int i = 0; i <= top; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  s.display();
}