#include <iostream>
#include <string>

using namespace std;

string completeBrackets(const string &sequence) {
    int balance = 0;

    for (char letter : sequence) {
        if (letter == '(') balance++;

        else balance--;

        if (balance < 0) return "IMPOSSIBLE";
    }

    string result = sequence;
    result.append(balance, ')');
    return result;
}

int main() {
    string sequence;
    cin >> sequence;

    string result = completeBrackets(sequence);
    cout << result << endl;

    return 0;
}
