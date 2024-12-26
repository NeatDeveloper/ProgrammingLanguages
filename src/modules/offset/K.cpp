#include <iostream>

using namespace std;

int main() {

    int number;

    cin >> number;

    int
        firstDigit = number / 1000,
        secondDigit = (number / 100) % 10,
        thirdDigit = (number / 10) % 10,
        fourthDigit = number % 10;

    if(firstDigit == fourthDigit && secondDigit == thirdDigit)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
