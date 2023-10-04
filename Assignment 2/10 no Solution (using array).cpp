#include <iostream>
using namespace std;

int main() {
  int arr[5];
  cout << "Enter 5 integers:\n";
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
      arr[i] = 0;
    } else {
      arr[i] = 1;
    }
  }

  cout << "Modified array:\n";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
