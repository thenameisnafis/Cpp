#include <iostream>
using namespace std;
int main() {

    int arr[3][3];
    cout << "Enter the value of the array : ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    int i = 1;
    cout << "Middle Row : ";
    while(i == 1) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        break;
    }
    int j = 1;
    cout << "Middle column : ";
    while(j == 1) {
        for(int i = 0; i < 3; i++) {

            cout << arr[i][j] << " ";
        }
        break;
    }
}
