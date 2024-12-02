#include <iostream>

bool isPolindrom(const std::string& word) {
    int length = word.length();

    bool _isPolindrom = true;

    for(int left = 0; left <= length / 2; left++) {
        int right = length - 1 - left;

        if(word[left] != word[right]) {
            _isPolindrom = false;
            break;
        }
    }

    return _isPolindrom;
}

int main() {
    std::string word;

    std::cin >> word;

    std::cout << (isPolindrom(word) ? "Yes" : "No") << '\n';

    return 0;
}
