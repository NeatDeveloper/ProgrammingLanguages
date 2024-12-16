#include <iostream>
#include <vector>

using namespace std;


void dfs(int node, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbor = 0; neighbor < graph.size(); neighbor++)
        if (graph[node][neighbor] == 1 && !visited[neighbor])
            dfs(neighbor, graph, visited);

}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> graph(N, vector<int>(N));

    int edgeCount = 0;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];

            if (graph[i][j] == 1) edgeCount++;
        }

    edgeCount /= 2;

    // ----- Проверяем количество рёбер ----

    if (edgeCount != N - 1) {
        cout << "NO" << endl;
        return 0;
    }

    // --------------------------------------


    // --- Проверяем связность ----

    vector<bool> visited(N, false);
    dfs(0, graph, visited);

    // -----------------------------

    for (int i = 0; i < N; i++)
        if (!visited[i]) {
            cout << "NO" << endl;

            return 0;
        }

    cout << "YES" << endl;

    return 0;
}
