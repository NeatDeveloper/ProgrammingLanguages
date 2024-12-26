#include <iostream>

using namespace std;

int main() {

    int first, second;

    cin >> first >> second;

    if(first > second) cout << 1 << endl;
    if(second > first) cout << 2 << endl;
    if(first == second) cout << 0 << endl;

    return 0;
}
