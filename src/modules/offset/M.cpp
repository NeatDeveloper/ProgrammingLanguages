#include <iostream>

using namespace std;


int main() {

    int a1, d, N;

    cin >> a1 >> d >> N;

    cout << (N * (2 * a1 + (N - 1) * d) / 2) << endl;

    return 0;
}
