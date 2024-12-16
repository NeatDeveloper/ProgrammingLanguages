#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 10007;

int main() {
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> b = a;

    reverse(b.begin(), b.end());

    long long total_time = 0;

    for (int i = 0; i < n; i++)
        total_time = (total_time + (1LL * a[i] * b[i]) % MOD) % MOD;


    cout << total_time << endl;

    return 0;
}
