#include <iostream>
using namespace std;

int main() {
  double length;
  double width;
  cout << "Enter length of Rectangle:" << endl;
  cin >> length;
  cout << "Enter width of Rectangle:" << endl;
  cin >> width;
  float area = length * width;
  cout << "Area of rectangle is:" << area;
}