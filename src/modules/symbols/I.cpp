#include <iostream>

using namespace std;

const string vowels = "AIUEOYaiueoy";

int main() {
    string word;

    cin >> word;

    string new_word = "";

    for(char letter : word) {
        if(vowels.find(letter) != std::string::npos) continue;

        if(letter >= 65 && letter <= 90) letter = letter + 32;

        new_word += ".";
        new_word += letter;
    }

    cout << new_word << '\n';

    return 0;
}
