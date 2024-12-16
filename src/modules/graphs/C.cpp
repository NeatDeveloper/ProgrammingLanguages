#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> lights(N, 0);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        lights[a]++;
        lights[b]++;
    }

    for (int i = 0; i < N; i++)
        cout << lights[i] << ' ';

    cout << endl;

    return 0;
}
