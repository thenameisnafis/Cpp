#include<iostream>
using namespace std;

int main()
{
    double n1,n2,n3;
    double a,b,c;
    cout<<" input 3 number:";
    cin>>n1>>n2>>n3;
    if (n1>=n2 && n1>=3)
        {cout <<"highest is "<<n1<<endl;
        a=n1;}
    else if (n2>=n1 && n1>=n3)
        {cout <<"highest is "<<n2<<endl;
        a=n2;}
    else
        {cout<<"highest is "<<n3<<endl;
        a=n3;}


    if (a<=50)
        cout << "after manipulation:" <<a+10;
    else if(a>50 && a<=100)
        cout<<"after manipulation: "<<a+20;
    else if(a>100 && a<=150)
        cout<<"after manipulation: "<<a+30;
        else
            cout<<"after manipulation"<<a-50;

    return 0;

}
