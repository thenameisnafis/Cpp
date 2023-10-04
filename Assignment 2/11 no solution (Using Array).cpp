#include <iostream>
using namespace std;

int main() {
    char word[50];
    cout << "Enter a word: ";
    cin >> word;

    cout << "Vowels in the word: ";
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            cout << word[i] << " ";
        }
    }

    return 0;
}
