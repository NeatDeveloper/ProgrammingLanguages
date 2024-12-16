#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<vector<int>> adj_matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj_matrix[i][j];

    int max_degree = 0;

    for (int i = 0; i < n; i++) {
        int degree = 0;

        for (int j = 0; j < n; j++)
            degree += adj_matrix[i][j];

        max_degree = max(max_degree, degree);
    }

    cout << max_degree << endl;

    return 0;
}
