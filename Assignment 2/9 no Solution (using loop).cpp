#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double pie = 3.1416;
    int n;
    cout << "How many planets do you want to calculate :";
    cin >> n;
    float mass_planets, diameter, volume,average_density;
    for (int i = 1; i <= n; i++) {

        cout << "Enter mass (in kg) of the planet: ";
        cin >> mass_planets;
        cout << "Enter diameter of the planet: ";
        cin >> diameter;

        volume = 1.33 * pie * pow ((diameter/2),3);
        average_density= mass_planets/volume;

        cout<<"The average density is:"<<average_density<<endl;
    }
    return 0;
}
