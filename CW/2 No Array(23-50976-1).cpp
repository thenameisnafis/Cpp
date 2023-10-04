#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    float arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    float num;
    cout << "Enter number to search: ";
    cin >> num;

    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == num) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << num << " is present in the array." << endl;
    } else {
        cout << num << " is not present in the array." << endl;
    }

    return 0;
}
