#include <iostream>

using namespace std;

int main() {
    int N, K;

    cin >> N >> K;

    int answer = 0;

    int currentNumber;

    for(int i = 0; i < N; i++) {
        cin >> currentNumber;

        if(currentNumber % K == 0) answer += currentNumber;
    }

    cout << answer << endl;


    return 0;
}
