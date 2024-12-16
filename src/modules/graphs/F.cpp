#include <iostream>
#include <vector>

using namespace std;


void dfs(int node, vector<vector<int>>& matrix, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbor = 0; neighbor < matrix.size(); neighbor++)
        if (matrix[node][neighbor] == 1 && !visited[neighbor])
            dfs(neighbor, matrix, visited);

}

int main() {
    int N, S;
    cin >> N >> S;

    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];


    vector<bool> visited(N, false);

    dfs(S - 1, matrix, visited);

    int friendCount = 0;

    for (int i = 0; i < N; i++)
        if (visited[i])
            friendCount++;

    cout << friendCount - 1 << endl;

    return 0;
}
