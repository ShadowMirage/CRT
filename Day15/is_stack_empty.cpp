#include <iostream>
#include <stack>
using namespace std;

bool isEmpty(stack<int> s) {
  if (s.empty()) {
    return true;
  } else {
    return false;
  }
}

int main() {

  stack<int> s;

  s.push(10);
  s.push(20);
  s.push(30);

  if (isEmpty(s)) {
    cout << "Stack is Empty";
  } else {
    cout << "Stack is Not Empty";
  }

  return 0;
}