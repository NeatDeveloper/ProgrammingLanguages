#include <iostream>
#include <vector>

using namespace std;

string shortcut(const string& word) {
    int length = word.length();

    if(length <= 10) return word;

    string short_variant = "";

    short_variant += word[0];

    short_variant += to_string(length - 2);

    short_variant += word[length - 1];

    return short_variant;
}

int main() {
    int count;

    cin >> count;

    vector<string> short_variants;

    string word;

    for(int i = 0; i < count; i++) {
        cin >> word;

        short_variants.push_back(shortcut(word));
    }

    for(string short_variant : short_variants) {
        cout << short_variant << '\n';
    }

    return 0;
}
