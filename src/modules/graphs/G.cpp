#include <iostream>
#include <vector>
using namespace std;


void dfs(int node, const vector<vector<int>>& graph, vector<bool>& visited, vector<int>& component) {
    visited[node] = true;

    component.push_back(node + 1);

    for (int neighbor = 0; neighbor < graph.size(); neighbor++)
        if (graph[node][neighbor] == 1 && !visited[neighbor])
            dfs(neighbor, graph, visited, component);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));

    string line;

    for (int i = 0; i < n; i++) {
        cin >> line;

        for(int j = 0; j < line.size(); j++)
            graph[i][j] = line[j] - '0';
    }

    vector<bool> visited(n, false);
    vector<vector<int>> components;

    for (int i = 0; i < n; i++)
        if (!visited[i]) {
            vector<int> component;
            dfs(i, graph, visited, component);
            components.push_back(component);
        }


    cout << components.size() << endl;

    for (const auto& component : components) {
        cout << component.size() << endl;
        for (int vertex : component)
            cout << vertex << " ";

        cout << endl;
    }

    return 0;
}
