#include <iostream>

char getPrevLetterIndex(const char& letter, int shift = 1) {
    if(letter - shift < 65) return 90;

    return letter - shift;
}

int main() {
    std::string word;
    int shift;

    std::cin >> word;
    std::cin >> shift;

    std::string decoding = "";

    if(shift < 1 || shift > 10) {
        std::cout << word << '\n';
        return 0;
    }

    for(char letter : word)
        decoding += getPrevLetterIndex(letter, shift);

    std::cout << decoding << '\n';

    return 0;
}
