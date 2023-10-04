#include <iostream>
using namespace std;

int main() {
    int lengths[5];
    int smallest;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a length: ";
        cin >> lengths[i];
    }

    smallest = lengths[0];
    for (int i = 1; i < 5; i++) {
        if (lengths[i] < smallest) {
            smallest = lengths[x];
        }
    }

    cout << "The smallest length is: " << smallest << endl;

    return 0;
}
