#include <iostream>
using namespace std;

int main(){
  int user_input, check_even, sum=0 ;
  cout << "Enter Range: ";
  cin >> user_input;

  for(int i = 0; i <= user_input; i++ ){
    if(i % 2 == 0){
      check_even = i;
      sum = sum + check_even;
    }else{
      //nothing
    }
  }
  cout << "Sum: " << sum;

  return 0;
}
