#include <iostream>

using namespace std;

int main() {
    string encrypted;
    int k;

    cin >> encrypted >> k;

    string decrypted = "";

    for(char letter: encrypted) {
        int next = letter - k;

        if(next < 65) next = 90 - (k - (letter - 65) - 1);

        decrypted += (char)next;
    }

    cout << decrypted << '\n';

    return 0;
}
