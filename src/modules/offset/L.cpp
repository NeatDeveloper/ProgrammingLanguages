#include <iostream>

using namespace std;

void reverse_sequence(int count)
{
    if (count == 0)
        return;

    int number;

    cin >> number;

    reverse_sequence(count - 1);

    cout << number << " ";
}

int main() {
    int count;

    std::cin >> count;

    reverse_sequence(count);

    return 0;
}
