#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  int arr[n];

  // input array
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxi = arr[0];
  int mini = arr[0];

  // single traversal
  for (int i = 1; i < n; i++) {
    if (arr[i] > maxi) {
      maxi = arr[i];
    }

    if (arr[i] < mini) {
      mini = arr[i];
    }
  }

  cout << "Max = " << maxi << endl;
  cout << "Min = " << mini << endl;

  return 0;
}