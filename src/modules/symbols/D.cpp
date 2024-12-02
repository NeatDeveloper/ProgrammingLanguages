#include <iostream>

int main() {
    int vowelsCount = 0;

    std::string vowels = "AIUEOYaiueoy";

    char letter;

    while(true) {
        std::cin >> letter;

        if(letter == 46) break;

        if(vowels.find(letter) != std::string::npos) vowelsCount++;
    }

    std::cout << vowelsCount << '\n';

    return 0;
}
