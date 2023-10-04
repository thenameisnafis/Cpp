#include <iostream>
#include <string>
using namespace std;

struct student {
    int rollNo;
    string name;
    int age;
    string address;
};

int main() {
    const int numStudents = 10;
    student students[numStudents] = {
        { 1, "Nafis", 14, "Chattogram" },
        { 2, "Urmi", 14, "Rajshahi" },
        { 3, "Urbi", 14, "Brahmanbaria" },
        { 4, "Anikah", 12, "Noakhali" },
        { 5, "Anan", 11, "Mymansingh" },
        { 6, "Marzia", 13, "Dhaka" },
        { 7, "Sraboni", 12, "Dhaka" },
        { 8, "Prapti", 11, "Rangamati" },
        { 9, "Neloy", 13, "Dhaka" },
        { 10, "Shanto", 13, "Chattogram" }
    };

    for (int i = 0; i < numStudents; i++) {
        if (students[i].age == 14) {
            cout << students[i].name << endl;
        }
    }

    return 0;
}
