#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
    string address;
};

int main() {
    const int numStudents = 2;
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter information for Student " << i+1 << endl;

        cout << "Roll no.: ";
        cin >> students[i].rollNo;

        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Age (between 11 to 14): ";
        cin >> students[i].age;

        cout << "Address: ";
        cin.ignore();
        getline(cin, students[i].address);

        cout << endl;
    }

    int rollNo;
    cout << "Enter roll no. to display student details: ";
    cin >> rollNo;

    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Roll no.: " << students[i].rollNo << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found." << endl;
    }

    return 0;
}
