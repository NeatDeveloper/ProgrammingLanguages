#include <iostream>

bool inUpperCase(const char& letter) {
    if(letter >= 65 && letter <= 90) return true;

    return false;
}


char toLowerCase(const char& letter) {
    return letter + 32;
}

const std::string vowels = "AIUEOYaiueoy";

bool isVowels(const char& letter) {
    return vowels.find(letter) != std::string::npos;
}

std::string logic(const std::string& word) {
    std::string new_word = "";

    for(char letter : word) {
        if(isVowels(letter)) continue;

        if(inUpperCase(letter)) letter = toLowerCase(letter);

        new_word += ".";
        new_word += letter;
    }

    return new_word;
}


int main() {
    std::string word;

    std::cin >> word;

    std::cout << logic(word) << '\n';

    return 0;
}
