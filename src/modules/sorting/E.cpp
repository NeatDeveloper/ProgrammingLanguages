#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    long long m;

    cin >> n >> m;

    vector<pair<long long, long long>> songs(n);

    long long total_size = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;

        cin >> a >> b;

        songs[i] = {a, b};

        total_size += a;
    }

    if (total_size <= m) {
        cout << 0 << endl;
        return 0;
    }

    vector<long long> savings(n);

    for (int i = 0; i < n; i++)
        savings[i] = songs[i].first - songs[i].second;


    sort(savings.rbegin(), savings.rend());

    int compress_count = 0;

    for (int i = 0; i < n; i++) {

        total_size -= savings[i];
        compress_count++;

        if (total_size <= m) {
            cout << compress_count << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
