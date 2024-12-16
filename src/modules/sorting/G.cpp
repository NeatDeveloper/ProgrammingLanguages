#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> result;

    int left = (n - 1) / 2, right = left + 1;

    while (left >= 0 || right < n) {
        if (left >= 0) result.push_back(a[left--]);
        if (right < n) result.push_back(a[right++]);
    }

    for (int x : result)
        cout << x << " ";

    cout << endl;
}

int main() {
    int t;

    cin >> t;

    while (t--) solve();

    return 0;
}
