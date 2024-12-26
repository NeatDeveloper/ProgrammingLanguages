#include <iostream>

using namespace std;

int main() {

    string _number;

    cin >> _number;

    int number = 0;

    for(char numChar: _number) {
        number += numChar - '0';
    }

    cout << (number % 10 == 0 ? "YES" : "NO") << endl;

    return 0;
}
