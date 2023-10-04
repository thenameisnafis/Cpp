#include <iostream>
using namespace std;

int main() {
    double monthly_savings,yearly_savings ;

    for (int i = 1; i <= 12; i++) {
        cout << "Enter amount saved in month " << i << ": ";
        cin >> monthly_savings;
        yearly_savings += monthly_savings;
    }

    cout << "Total amount saved in a year: " << yearly_savings <<endl;

    return 0;
}
