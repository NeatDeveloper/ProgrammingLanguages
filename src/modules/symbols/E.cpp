#include <iostream>

using namespace std;

int main() {
    string sentence;

    cin >> sentence;

    string reverse_sentence = "";

    for(int i = sentence.length() - 1; i >= 0; --i)
        reverse_sentence += sentence[i];

    cout << reverse_sentence << endl;

    return 0;
}
