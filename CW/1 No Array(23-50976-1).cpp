#include <iostream>
using namespace std;

int main()
{
    float arr[2][4] = {{1.2, 3.4, 5.6, 7.8}, {4.3, 2.1, 6.5, 8.9}};

    float max1 = arr[0][0];
    for (int i = 1; i < 4; i++) {
        if (arr[0][i] > max1) {
            max1 = arr[0][i];
        }
    }

    float min2 = arr[1][0];
    for (int i = 1; i < 4; i++) {
        if (arr[1][i] < min2) {
            min2 = arr[1][i];
        }
    }

    float result = max1 * min2;

    cout << "The largest element in the first row is " << max1 << endl;
    cout << "The smallest element in the second row is " << min2 << endl;
    cout << "The multiplied result is " << result << endl;

    return 0;
}
