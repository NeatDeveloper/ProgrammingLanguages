#include <iostream>
#include <vector>

std::string shortcut(const std::string& word) {
    int length = word.length();

    if(length <= 10) return word;

    std::string short_variant = "";

    short_variant += word[0];

    short_variant += std::to_string(length - 2);

    short_variant += word[length - 1];

    return short_variant;
}

int main() {
    int count;

    std::cin >> count;


    std::vector<std::string> short_variants;

    std::string word;
    for(int i = 0; i < count; i++) {
        std::cin >> word;

        short_variants.push_back(shortcut(word));
    }

    for(std::string short_variant : short_variants) {
        std::cout << short_variant << '\n';
    }

    return 0;
}
