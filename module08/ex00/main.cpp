#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include "easyfind.hpp"

int main() {
    std::cout << "\n==========Array==========" << std::endl;
    std::array<int, 10> arr;
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }
    try {
        std::array<int, 10>::iterator test = easyfind(arr, 64);
        std::cout << "Element " << *test << " is found" << std::endl;
        test = easyfind(arr, 10);
        std::cout << "Element " << *test << " is found" << std::endl;
    } catch (std::exception & exception) {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "==========Vector==========" << std::endl;
    std::vector<int> vec;
    for (int i = 0; i < 10; i++) {
        vec.push_back(i * i);
    }
    try {
        std::vector<int>::iterator test = easyfind(vec, 9);
        std::cout << "Element " << *test << " is found" << std::endl;
        test = easyfind(vec, 10);
        std::cout << "Element " << *test << " is found " << std::endl;
    } catch (std::exception & exception) {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "\n==========List==========" << std::endl;
    std::list<int> lst;
    for (int i = 0; i < 10; i++) {
        lst.push_back(i * i);
    }
    try {
        std::list<int>::iterator test = easyfind(lst, 25);
        std::cout << "Element " << *test << " is found" << std::endl;
        test = easyfind(lst, 6);
        std::cout << "Element " << *test << " is found" << std::endl;
    } catch (std::exception & exception) {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "\n==========Forward list==========" << std::endl;
    std::forward_list<int> frd_lst;
    std::forward_list<int>::iterator iter;
    for (int i = 0; i < 10; i++) {
        frd_lst.push_front(i * i);
    }
    try {
        std::forward_list<int>::iterator test = easyfind(frd_lst, 81);
        std::cout << "Element " << *test << " is found" << std::endl;
        test = easyfind(frd_lst, 3);
        std::cout << "Element " << *test << " is found" << std::endl;
    } catch (std::exception & exception) {
        std::cout << exception.what() << std::endl;
    }

    std::cout << "\n==========Deque==========" << std::endl;
    std::deque<int> dq;
    for (int i = 0; i < 10; i++) {
        dq.push_back(i * i);
    }
    try {
        std::deque<int>::iterator test = easyfind(dq, 49);
        std::cout << "Element " << *test << " is found" << std::endl;
        test = easyfind(dq, 61);
        std::cout << "Element " << *test << " is found" << std::endl;
    } catch (std::exception & exception) {
        std::cout << exception.what() << std::endl;
    }
    return 0;
}