#include<iostream>
using namespace std;
int main()
{
    int price, quant, total=0;
    for(int i = 0; i <= quant;i++){

    cout << " Input Sales Quantity: ";
    cin >> quant;
    cout << " Input Price: " <<endl;
    cin >> price;

    total += price * quant;

    cout <<"Total: "<< total << endl;

}
    return 0;
    }
