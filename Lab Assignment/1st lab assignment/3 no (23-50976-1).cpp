#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"Write a number between 1 to 3: ";
cin>>a;
switch (a){
case 1:
cout<<"Mango";
break;

case 2:
cout<<"Apple";
break;

case 3:
cout<<"Coconut";
break;
default:
cout<<"Out of bound!";


}

return 0;
}
