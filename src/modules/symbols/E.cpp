#include <iostream>

int main() {
    std::string sentence;

    std::cin >> sentence;

    std::string reverse_sentence = "";

    for(int i = sentence.length() - 1; i >= 0; --i)
        reverse_sentence += sentence[i];

    std::cout << reverse_sentence << '\n';

    return 0;
}
