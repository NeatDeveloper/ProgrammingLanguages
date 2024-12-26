#include <iostream>

using namespace std;

int main() {

    string number;

    cin >> number;

    int min = number[0] - '0';

    for(char numChar: number) {
        if(numChar - '0' < min) min = numChar - '0';
    }

    cout << min << endl;

    return 0;
}
