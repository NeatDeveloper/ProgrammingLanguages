#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, node, graph, visited)) return true;

        } else if (neighbor != parent) return true;
    }
    return false;
}

int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;

        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);

    for (int i = 1; i <= n; i++)
        if(!visited[i])
            if (dfs(i, -1, graph, visited)) {
                cout << "YES" << endl;
                return 0;
            }

    cout << "NO" << endl;

    return 0;
}
