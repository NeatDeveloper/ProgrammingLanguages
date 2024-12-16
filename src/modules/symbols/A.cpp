#include <iostream>

using namespace std;

int main() {
    char input;

    std::cin >> input;

    if (input >= 48 && input <= 57)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
