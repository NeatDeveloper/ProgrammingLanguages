#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<pair<int, int>> instruments;

    for (int i = 0; i < n; i++) {
        int ai;

        cin >> ai;

        instruments.push_back({ai, i + 1});
    }

    sort(instruments.begin(), instruments.end());

    vector<int> chosen;

    for (const auto& instrument : instruments) {
        if (k >= instrument.first) {
            k -= instrument.first;
            chosen.push_back(instrument.second);

        } else break;
    }

    cout << chosen.size() << endl;

    for (int idx : chosen)
        cout << idx << " ";

    cout << endl;

    return 0;
}
