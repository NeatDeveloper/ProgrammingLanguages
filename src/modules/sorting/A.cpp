#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const double PI = acos(-1);

int main() {
    int n;
    cin >> n;

    vector<int> radii(n);

    for (int i = 0; i < n; i++)
        cin >> radii[i];

    sort(radii.begin(), radii.end());

    double redArea = 0.0;

    for (int i = n - 1; i >= 0; i--) {

        double area = PI * radii[i] * radii[i];

        if ((n - i) % 2 == 1) redArea += area;
        else redArea -= area;
    }

    cout.precision(6);

    cout << fixed << redArea << endl;

    return 0;
}
