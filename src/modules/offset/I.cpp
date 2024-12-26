#include <iostream>

using namespace std;

int main() {

    int count;

    cin >> count;

    int index;
    int currentNumber;

    for(int i = 0; i < count; i++) {
        cin >> currentNumber;

        if(currentNumber < 0) index = i + 1;
    }

    cout << index << endl;

    return 0;
}
