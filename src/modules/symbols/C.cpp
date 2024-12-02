#include <iostream>
using namespace std;

int main() {
    string sentence;

    getline(cin, sentence);

    int count_W_words = 0;

    for(char letter: sentence) {
        if(letter == 'W' || letter == 'w') {
            count_W_words++;
        }
    }

    cout << count_W_words << endl;

    return 0;
}
