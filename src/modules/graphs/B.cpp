#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;

    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];


    for (int i = 0; i < N; i++) {

        vector<int> list;

        for (int j = 0; j < N; j++)
            if (matrix[i][j] == 1)
                list.push_back(j + 1);


        for (int vertex : list)
            cout << vertex << " ";

        cout << endl;
    }

    return 0;
}
