#include <iostream>
#include <stack>

using namespace std;

bool isCorrectBracketSequence(const string& sequence) {
    stack<char> bracket_stack;

    for (char bracket : sequence) {
        if (bracket == '(' || bracket == '[') {
            bracket_stack.push(bracket);
            continue;
        }

        if (bracket_stack.empty()) return false;

        char last_bracket = bracket_stack.top();
        bracket_stack.pop();

        if (
            (bracket == ')' && last_bracket != '(') ||
            (bracket == ']' && last_bracket != '[')
        ) return false;
    }

    return bracket_stack.empty();
}

int main() {
    string sequence;
    cin >> sequence;

    cout << (isCorrectBracketSequence(sequence) ? "Yes" : "No") << endl;
    return 0;
}
