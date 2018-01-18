#include <iostream>

#include "core/linkedlist.h"

int main() {

    ac::LinkedList<int> l1;

    ac::LinkedList<int> l2(l1);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}