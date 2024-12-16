#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<int> myDeque;
    string command;

    while(true) {
        cin >> command;

        if(command == "Bye") break;

        if(command == "push_back") {
            int number;

            cin >> number;

            myDeque.push_back(number);
            continue;
        }
        if(command == "push_front") {
            int number;

            cin >> number;

            myDeque.push_front(number);
            continue;
        }

        if(myDeque.empty()) {
            cout << "DEQUE IS EMPTY!" << '\n';
            continue;
        }

        if(command == "pop_back")
            myDeque.pop_back();

        if(command == "pop_front")
            myDeque.pop_front();

        if(command == "show_front")
            cout << myDeque.front() << '\n';

        if(command == "show_back")
            cout << myDeque.back() << '\n';
    }

    return 0;
}
