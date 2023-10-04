#include <iostream>

using namespace std;

void displayMiddleElements(int arr[][100], int n)
{
    int middleIndex = n / 2;

    cout << "Middle Row Elements: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[middleIndex][j] << " ";
    }
    cout << endl;

    cout << "Middle Column Elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][middleIndex] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    int arr[100][100];

    cout << "Enter the size of the 2D array (odd number only): ";
    cin >> n;

    cout << "Enter the elements of the 2D array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    return 0;
}
