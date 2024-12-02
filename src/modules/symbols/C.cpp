#include <iostream>
#include <vector>

bool inLowerCase(const char& letter) {
    if(letter >= 97 && letter <= 122) return true;

    return false;
}

char toggleCase(const char& letter) {
    return letter + (inLowerCase(letter) ? -1 : 1) * 32;
}

char toLowerCase(const char& letter) {
    if(inLowerCase(letter)) return letter;

    return toggleCase(letter);
}

struct CharCount {
    char character;
    int count;
};

std::vector<CharCount> countCharacterOccurrences(const std::string& sentence, const char* chars, bool caseSensitive = false) {
    std::vector<CharCount> occurrences;

    for (const char* p = chars; *p != '\0'; ++p) {
        char targetChar = *p;
        int count = 0;

        for (char c : sentence) {
            if (caseSensitive)
                if (c == targetChar) count++;
            else
                if (toLowerCase(c) == toLowerCase(targetChar)) count++;
        }

        occurrences.push_back({targetChar, count});
    }

    return occurrences;
}

int main() {
    std::string sentence;

    getline(std::cin, sentence);

    const char* characters = "w";

    std::vector<CharCount> result = countCharacterOccurrences(sentence, characters, true);

    for (const auto& entry : result) {
        std::cout << entry.count << '\n';
    }

    return 0;
}
