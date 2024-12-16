#include <iostream>

using namespace std;

const char* vowels = "AIUEOaiueo";

bool contain(const char& letter) {
    for(int i = 0; vowels[i] != '\0'; i++)
        if(vowels[i] == letter) return true;

    return false;
}

int main() {
    int vowelsCount = 0;

    char letter;

    while(true) {
        cin >> letter;

        if(letter == '.') break;

        if(contain(letter)) vowelsCount++;
    }

    cout << vowelsCount << endl;

    return 0;
}
