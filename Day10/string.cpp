#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1 = "Hello";
  string str2 = "JECRC";
  cout << str1 << " " << str2 << endl;
  // len
  int n = str1.length();
  cout << "Length of String is:" << n << endl;
  // append
  cout << "After Appending String is:" << str1.append("Students") << endl;
  // empty
  cout << "Is String Empty:" << str2.empty() << endl;
  // concatination
  cout << "After Concatination of String is:" << str1 + "Student" << endl;

  cout << "After Concatination of String is2:" << str1 + "Student" << endl;
  // push back
  str2.push_back('U');
  cout << "After push_back() method:" << str2 << endl;
  // pop back
  str2.push_back('U');
  cout << "After pop_back() method:" << str2 << endl;

  // find() method
  int index = str1.find("ello");
  cout << "Index of 'ello' in str1:" << index << endl;

  // swap() method
  str1.swap(str2);
  cout << "After swapping str1 and str2:" << endl;
  cout << "str1: " << str1 << endl; // Jecrc
  cout << "str2: " << str2 << endl; // Hellostudents

  // substr() method
  string subStr =
      str2.substr(5, 6); // 5 is index and 6 is total length of substring
  cout << "Substring of str2 from index 5 with length 6:" << subStr << endl;

  // getline() method
  string str3;
  // cin >> str3;
  getline(cin, str3);
  cout << "You entered: " << str3 << endl;

  return 0;
}