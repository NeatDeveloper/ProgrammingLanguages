#include <iostream>

using namespace std;

int main() {

    int count;

    cin >> count;

    int number;

    for(int i = 0; i < count; i++) {
        cin >> number;

        if(number % 2 == 0) cout << i + 1 << ' ';
    }

    return 0;
}
