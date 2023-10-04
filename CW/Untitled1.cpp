#include <iostream>
using namespace std;
int stringLength (const char string[]){
int count = 0;
while ( string[count] != '\0' )
	++count;
return count;
}
int main (void) {
const char word1[] = { 'a', 's', 't', 'e', 'r', '\0' };
const char word2[] = { 'a', 't', '\0' };
const char word3[] = { 'a', 'w', 'e', '\0' };
cout<<stringLength (word1)<<endl;
cout<<stringLength (word2)<<endl;
cout<<stringLength (word3)<<endl;
return 0;
}
