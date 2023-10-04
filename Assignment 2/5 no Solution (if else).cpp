#include <iostream>
using namespace std;

int main() {
    float marks[5], GPA[5], CGPA = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Input marks for the course" << i+1 << ": ";
        cin >> marks[i];

        if (marks[i] >= 90) {
            GPA[i] = 4.00;
        } else if (marks[i] >= 85) {
            GPA[i] = 3.75;
        } else if (marks[i] >= 80) {
            GPA[i] = 3.50;
        } else if (marks[i] >= 75) {
            GPA[i] = 3.25;
        } else if (marks[i] >= 70) {
            GPA[i] = 3.00;
        } else if (marks[i] >= 65) {
            GPA[i] = 2.75;
        } else if (marks[i] >= 60) {
            GPA[i] = 2.50;
        } else if (marks[i] >= 50) {
            GPA[i] = 2.25;
        } else {
            GPA[i] = 0.00;
        }


        cout << "Grade for course " << i+1 << ": ";
        if (GPA[i] == 4.00) {
            cout << "A+" << endl;
        } else if (GPA[i] == 3.75) {
            cout << "A" << endl;
        } else if (GPA[i] == 3.50) {
            cout << "B+" << endl;
        } else if (GPA[i] == 3.25) {
            cout << "B" << endl;
        } else if (GPA[i] == 3.00) {
            cout << "C+" << endl;
        } else if (GPA[i] == 2.75) {
            cout << "C" << endl;
        } else if (GPA[i] == 2.50) {
            cout << "D+" << endl;
        } else if (GPA[i] == 2.25) {
            cout << "D" << endl;
        } else {
            cout << "F" << endl;
        }


        CGPA += GPA[i];
    }

    // Calculate the CGPA
    CGPA /= 5;

    // Output the CGPA
    cout <<endl << "CGPA: " << CGPA << endl;

    return 0;
}
