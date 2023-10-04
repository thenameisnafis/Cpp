#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string name;
    int age;
public:
    person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class doctor : public person {
private:
    string workingid;
    string designation;
    double salary;
public:
    doctor(string name, int age, string workingid, string designation, double salary) : person(name, age) {
        this->workingid = workingid;
        this->designation = designation;
        this->salary = salary;
    }
    double calculateTax() {
        return salary * 0.24;
    }
    void display() {
        person::display();
        cout << "Working ID: " << workingid << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    doctor doc("Devi Shetty", 45, "1101-1", "Executive Director", 45000);
    doc.display();
    cout << "Yearly Tax: " << doc.calculateTax() << endl;
    return 0;
}
