#include "DoublyLinkedList.h"
#include <iostream>

int main() {
    DoublyLinkedList list = { 1, 2, 3, 4 };
    std::cout << "Initial list: " << list.toString() << std::endl;
    list.insert(2, 10);
    std::cout << "After inserting 10 at index 2: " << list << std::endl;

    list.remove(1);
    std::cout << "After removing element at index 1: " << list.toString() << std::endl;

    size_t index = 2;
    if (list.find(10, index)) {
        std::cout << "Value 10 found at index: " << index << std::endl;
    }
    else {
        std::cout << "Value 10 not found" << std::endl;
    }

    list.modify(2, 20);
    std::cout << "After modifying index 2 to 20: " << list << std::endl;

    std::cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}