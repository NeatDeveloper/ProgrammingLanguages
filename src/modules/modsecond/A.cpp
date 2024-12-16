#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];


    sort(arr.rbegin(), arr.rend());


    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}
