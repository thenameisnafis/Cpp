#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    Date date1, date2;

    cout << "Enter first date (DD MM YYYY): ";
    cin >> date1.day >> date1.month >> date1.year;

    cout << "Enter second date (DD MM YYYY): ";
    cin >> date2.day >> date2.month >> date2.year;

    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        cout << "Dates are equal";
    } else {
        cout << "Dates are not equal";
    }

    return 0;
}
