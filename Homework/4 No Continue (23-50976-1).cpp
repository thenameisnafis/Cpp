#include <iostream>
using namespace std;
int main() {
  for (int i = 0; i < 20; i++) {
    if (i == 12 || i == 9) {
      continue; // skip the current iteration when i equals 3 or 7
    }
    std::cout << i << " ";
  }

  std::cout << std::endl;

  return 0;
}
