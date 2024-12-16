#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;

    cin >> N >> M;

    vector<vector<int>> matrix(N, vector<int>(N, 0));

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

    return 0;
}
