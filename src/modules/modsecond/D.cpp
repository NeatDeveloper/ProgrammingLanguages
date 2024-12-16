#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    int count = 0, n = s.size();

    for (int i = 0; i <= n - 5; i++) {
        if (s.substr(i, 5) == ">>-->") count++;
        if (s.substr(i, 5) == "<--<<") count++;
    }

    cout << count << endl;
    return 0;
}
