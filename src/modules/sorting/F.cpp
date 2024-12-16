#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<int> z_sorted(n);

    int left = 0, right = n - 1;

    for (int i = 0; i < n; i++)
        if (i % 2 == 0) z_sorted[i] = a[left++];
        else z_sorted[i] = a[right--];


    for (int i = 0; i < n; i++)
        cout << z_sorted[i] << " ";

    cout << endl;

    return 0;
}
