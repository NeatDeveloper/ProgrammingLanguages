#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    string word_sequence;

    cin >> word_sequence;

    stack<char> word_stack;

    for(char letter : word_sequence) {
        if(!word_stack.empty() && word_stack.top() == letter) word_stack.pop();
        else word_stack.push(letter);
    }

    string answer = "";

     while (!word_stack.empty())  {
        answer += word_stack.top();
        word_stack.pop();
    }

    reverse(answer.begin(), answer.end());

    cout << answer << '\n';

    return 0;
}
