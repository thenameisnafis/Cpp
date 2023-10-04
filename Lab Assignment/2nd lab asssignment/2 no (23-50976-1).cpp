#include <iostream>
using namespace std;

int main() {
    float grade, sum = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter the grade of student " << i << ": ";
        cin >> grade;
        sum = sum + grade;
    }

    float average = sum / 5;
    cout << "The average grade of the 5 students is: " << average;

    return 0;
}
