#include "DoublyLinkedList.h"
#include <sstream>
#include <stdexcept>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

DoublyLinkedList::DoublyLinkedList(std::initializer_list<int> init) : head(nullptr), tail(nullptr), size(0) {
    for (int value : init) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }
}

DoublyLinkedList::DoublyLinkedList(const DoublyLinkedList& other) : head(nullptr), tail(nullptr), size(0) {
    Node* current = other.head;
    while (current) {
        Node* newNode = new Node(current->data);
        if (!head) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
        current = current->next;
    }
}

DoublyLinkedList::DoublyLinkedList(DoublyLinkedList&& other) : head(other.head), tail(other.tail), size(other.size) {
    other.head = nullptr;
    other.tail = nullptr;
    other.size = 0;
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

DoublyLinkedList& DoublyLinkedList::operator=(const DoublyLinkedList& other) {
    if (this != &other) {
        DoublyLinkedList temp(other);
        std::swap(head, temp.head);
        std::swap(tail, temp.tail);
        std::swap(size, temp.size);
    }
    return *this;
}

DoublyLinkedList& DoublyLinkedList::operator=(DoublyLinkedList&& other) {
    if (this != &other) {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp; 
        }
        head = other.head;
        tail = other.tail;
        size = other.size;
        other.head = nullptr;
        other.tail = nullptr;
        other.size = 0;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const DoublyLinkedList& list) {
    os << list.toString();
    return os;
}

std::istream& operator>>(std::istream& is, DoublyLinkedList& list) {
    int value;
    while (is >> value) {
        list.insert(list.size, value);
    }
    return is;
}

void DoublyLinkedList::insert(size_t index, int value) {
    if (index > size) {
        throw std::out_of_range("Запредельный порядок элемента");
    }
    Node* newNode = new Node(value);
    if (index == 0) {
        newNode->next = head;
        if (head) {
            head->prev = newNode;
        }
        head = newNode;
        if (!tail) {
            tail = newNode;
        }
    }
    else if (index == size) {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    else {
        Node* current = head;
        for (size_t i = 0; i < index; ++i) {
            current = current->next;
        }
        newNode->next = current;
        newNode->prev = current->prev;
        current->prev->next = newNode;
        current->prev = newNode;
    }
    size++;
}

void DoublyLinkedList::remove(size_t index) {
    if (index >= size) {
        throw std::out_of_range("Запредельный порядок элемента");
    }
    Node* current = head;
    for (size_t i = 0; i < index; ++i) {
        current = current->next;
    }
    if (current == head) {
        head = current->next;
        if (head) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }
    }
    else if (current == tail) {
        tail = current->prev;
        tail->next = nullptr;
    }
    else {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }
    delete current;
    size--;
}

bool DoublyLinkedList::find(int value, size_t index) const {
    Node* current = head;
    index = 0;
    while (current) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
        index++;
    }
    return false;
}

void DoublyLinkedList::modify(size_t index, int newValue) {
    if (index >= size) {
        throw std::out_of_range("Запредельный порядок элемента");
    }
    Node* current = head;
    for (size_t i = 0; i < index; ++i) {
        current = current->next;
    }
    current->data = newValue;
}

bool DoublyLinkedList::isEmpty() const {
    return size == 0;
}

std::string DoublyLinkedList::toString() const {
    std::stringstream ss;
    Node* current = head;
    while (current) {
        ss << current->data;
        if (current->next) {
            ss << ", ";
        }
        current = current->next;
    }
    return ss.str();
}