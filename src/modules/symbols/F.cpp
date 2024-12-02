#include <iostream>

using namespace std;


int main() {
    string word;

    cin >> word;

    int length = word.length();

    for(int left = 0; left <= length / 2; left++) {
        int right = length - 1 - left;

        if(word[left] != word[right]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
