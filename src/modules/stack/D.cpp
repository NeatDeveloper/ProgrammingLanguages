#include <iostream>
#include <deque>
#include <string>

int main() {
    std::deque<int> deque;
    std::string command;

    while (true) {
        std::cin >> command;

        if (command == "push_back") {

            int value;
            std::cin >> value;
            deque.push_back(value);

        } else if (command == "push_front") {

            int value;
            std::cin >> value;
            deque.push_front(value);

        } else if (command == "pop_back") {

            if (deque.empty())  std::cout << "DEQUE IS EMPTY!" << std::endl;
            else deque.pop_back();

        } else if (command == "pop_front") {

            if (deque.empty()) std::cout << "DEQUE IS EMPTY!" << std::endl;
            else deque.pop_back();

        } else if (command == "show_front") {

            if (deque.empty()) std::cout << "DEQUE IS EMPTY!" << std::endl;
             else std::cout << deque.front() << std::endl;

        } else if (command == "show_back") {

            if (deque.empty()) std::cout << "DEQUE IS EMPTY!" << std::endl;
            else std::cout << deque.back() << std::endl;

        } else if (command == "Bye") {

            std::cout << "BYE!" << std::endl;
            break;
        }
    }

    return 0;
}
