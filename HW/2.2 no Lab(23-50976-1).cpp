#include<iostream>
#include<string>
using namespace std;

struct student {
    int rollNo;
    string name;

};

int main() {
    const int numStudents = 10;
    student students[numStudents] = {
        { 50976, "Nafis" },
        { 50974, "Urmi" },
        { 50944, "Urbi" },
        { 50971, "Anikah" },
        { 50950, "Anan" },
        { 50905, "Marzia" },
        { 50459, "Sraboni"},
        { 50056, "Prapti" },
        { 50905, "Neloy" },
        { 50341, "Shanto" },
    };

    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNo%2 == 0) {
            cout << students[i].name<< "'s roll is an even roll number" << endl;
        }
    }
return 0;
}
