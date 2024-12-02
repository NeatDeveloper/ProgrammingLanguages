#include <iostream>
using namespace std;


int main() {
    char letter;

    cin >> letter;

    if(letter >= 97 && letter <= 122) {
        cout << (char)(letter - 32) << endl;

        return 0;
    }

    cout << letter << endl;


    return 0;
}
