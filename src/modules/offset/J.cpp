#include <iostream>

using namespace std;

int main() {

    string number;

    cin >> number;

    int product = 1;

    for(char numChar: number) {
        product *= numChar - '0';
    }

    cout << product << endl;

    return 0;
}
