#include <iostream>
using namespace std;
int main() {
  int i = 0;

  while (i < 10) {
    std::cout << i << " ";
    i++;
    if (i == 5) {
      break; // exit the loop when i equals 5
    }
  }

  std::cout << "Loop exited at i = " << i << std::endl;

  return 0;
}
