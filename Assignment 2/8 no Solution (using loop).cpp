#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout<<"Enter how many planets you want:";
    cin>>n;
    string planet_names;
    double planet_diameters;
    for (int i = 1; i<=n; i++) {
    cout << "Enter planet's name :";
    cin >> planet_names;
    cout << "Enter planet's diameter :";
    cin >> planet_diameters;

    cout <<"This planet's name is:" << planet_names <<endl;
    cout <<"This planet's diameter is:" << planet_diameters <<endl;

    }
    return 0;
}
