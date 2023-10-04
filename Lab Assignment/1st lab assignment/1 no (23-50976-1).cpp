#include<iostream>
using namespace std;

int main()
{
cout << "NAME: Jack " <<endl;


cout << "Enter your desired number: " <<endl;
int num;
cin >> num;
cout << "Desired number: " << num <<endl;

if(num >=8) {
num = 10;
cout << "Final score" <<num << endl;
}
else {
num = 5;
cout <<"Final score" << num << endl;
}
cout << "Lucky" << endl;
return 0;
}
