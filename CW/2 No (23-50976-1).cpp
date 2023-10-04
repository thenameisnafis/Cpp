#include <iostream>

using namespace std;

const int N = 5;

void printUpperHalf(int A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i <= j) {

                cout <<A[i][j] <<" ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
  int A[5][5];
cout<<"Enter the matrix = "<<endl;

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout << "The matrix[" << i <<"][" << j << "] = ";
        cin>>A[i][j];

}
}
cout<<"the upperhalf:"<<endl;
printUpperHalf(A);
return 0;
}

