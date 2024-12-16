#include <iostream>
#include <stack>
#include <sstream>

using namespace std;


int main() {
    stack<double> s;

    string expression;

    getline(cin, expression);

    stringstream ss(expression);
    string token;

    while(ss >> token) {
        if(isdigit(token[0])) s.push(stod(token));
        else {
            if(s.size() < 2) break;

            double b = s.top(); s.pop();
            double a = s.top(); s.pop();

            if(token == "+") s.push(a + b);
            if(token == "-") s.push(a - b);
            if(token == "*") s.push(a * b);
            if(token == "/") s.push(a / b);
        }
    }

    cout << s.top() << '\n';

    return 0;
}
