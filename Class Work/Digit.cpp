#include <iostream>
using namespace std;

int main(){
    int number;
    int Num100 = 100;
    int resultSum;
    int Result2;
    int Result3;
    int finalResult;
    
    cout << "Number is: ";
    cin >> number;

    resultSum = number + Num100;
    Result2 = resultSum % 5 ;
    Result3 = Result2 * 5;

    finalResult = Result3 / 3;

    cout << "Final Result is -"<<finalResult; 

}