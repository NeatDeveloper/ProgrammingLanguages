#include <iostream>

int main() {
    char input;

    std::cin >> input;

    std::cout << ((int)input >= 48 && (int)input <= 57 ? "yes" : "no");

    return 0;
}
