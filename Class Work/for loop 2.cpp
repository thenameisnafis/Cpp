#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
        cout<<"Enter the limit: "<<endl;
        cin>>n;
    for (i=0;i<=n;i++)
    {
            cout<<i<<endl;
            sum=sum+i;
            cout<<sum<<endl;
    }
    return 0;
}
