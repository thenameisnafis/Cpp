#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<"is a vowel.";
        break;
        default:
            cout<<"is a consonant.";
        }
    }
        else{
            cout<<"is not a character.";
                }
        return 0;
}
