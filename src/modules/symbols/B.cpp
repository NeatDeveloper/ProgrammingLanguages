#include <iostream>

bool isLetter(const char& letter) {
    if(
        letter >= 65 && letter <= 90 ||
        letter >= 97 && letter <= 122
    ) return true;

    return false;
}

bool inLowerCase(const char& letter) {
    bool _isLetter = isLetter(letter);

    if(letter >= 97 && letter <= 122) return true;

    return false;
}

bool inUpperCase(const char& letter) {
    return !inLowerCase(letter);
}

char toggleCase(const char& letter) {
    return letter + (inLowerCase(letter) ? -1 : 1) * 32;
}

char toUpperCase(const char& letter) {
    if(inUpperCase(letter)) return letter;

    return toggleCase(letter);
}

char toLowerCase(const char& letter) {
    if(inLowerCase(letter)) return letter;

    return toggleCase(letter);
}

int main() {
    char letter;

    std::cin >> letter;

    std::cout << toUpperCase(letter) << '\n';

    return 0;
}
