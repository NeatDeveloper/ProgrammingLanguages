#include <iostream>

using namespace std;


int main() {

    int A, N;

    cin >> A >> N;

    long long sum = 1, currentPower = 1;

    for(int i = 1; i <= N; i++) {
        currentPower *= A;

        sum += currentPower;
    }

    cout << sum << endl;

    return 0;
}
