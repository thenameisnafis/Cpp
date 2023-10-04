#include<iostream>
using namespace std;

int main() {

    int number1;
    int number2;
    int number3;
    int temp;

    cout <<"Number 1: " ;
    cin >> number1;
    cout <<"Number 2: ";
    cin >> number2;
    cout <<"Number 3: ";
    cin >> number3;



    temp = number1;
    number1 = number2;
    number2 = number3 ;
    number3 = temp;

    cout <<"Number 1 is "<< number1 << endl;
    cout <<"Number 2 is "<< number2 << endl;
    cout <<"Number 3 is "<< number3 << endl;


    return 0;

}
