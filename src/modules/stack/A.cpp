#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;

    int number;

    while (true)
    {
        cin >> number;

        if (number == 0)
            break;

        numbers.push_back(number);
    }

    for (auto number : numbers)
        if (number % 2 == 0)
            cout << number << ' ';

    cout << '\n';

    for (int i = numbers.size() - 1; i >= 0; i--)
        if (numbers[i] % 2 != 0)
            cout << numbers[i] << ' ';

    return 0;
}
