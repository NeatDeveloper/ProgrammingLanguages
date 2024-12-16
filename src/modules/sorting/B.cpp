#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSubstring(const string& a, const string& b) {
    return b.find(a) != string::npos;
}

int main() {
    int n;

    cin >> n;

    vector<string> strings;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int j = 0;

        while (j < strings.size() && strings[j].size() < s.size()) j++;

        strings.insert(strings.begin() + j, s);
    }

    for (int i = 0; i < n - 1; i++)
        if (!isSubstring(strings[i], strings[i + 1])) {
            cout << "NO" << endl;
            return 0;
        }

    cout << "YES" << endl;

    for (const string& s : strings)
        cout << s << endl;

    return 0;
}
