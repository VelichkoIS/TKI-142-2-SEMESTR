#pragma once

#include <initializer_list>
#include <string>
#include <ostream>

/**
* @brief класс линейного двусвязного списка
*/
class DoublyLinkedList {
private:
    /**
    * @brief структура описывающая узел списка
    */
    struct Node 
    {
        int data;
        Node* next;
        Node* prev;
        Node(int value);
};

    Node* head;
    Node* tail;
    size_t size;

public:
    /**
    * @brief конструктор по умолчанию
    */
    DoublyLinkedList();
    /**
    * @brief конструктор инициализируемого списка
    * @param init инициализирующий список
    */
    DoublyLinkedList(std::initializer_list<int> init);
    /**
    * @brief конструктор копирования
    * @param other линейный двусвязный список
    */
    DoublyLinkedList(const DoublyLinkedList& other);
    /**
    * @brief конструктор перемещения
    * @param other линейный двусвязный список
    */
    DoublyLinkedList(DoublyLinkedList&& other);

    /**
    * @brief деструктор класса
    */
    ~DoublyLinkedList();

    /**
    * @brief оператор копирования
    * @param other линейный двусвязный список
    */
    DoublyLinkedList& operator=(const DoublyLinkedList& other);
    /**
    * @brief оператор перемещения
    * @param other линейный двусвязный список
    */
    DoublyLinkedList& operator=(DoublyLinkedList&& other);

    /**
    * @brief оператор вывода
    * @param os поток вывода
    * @param list линейный двусвязный список
    */
    friend std::ostream& operator<<(std::ostream& os, const DoublyLinkedList& list);
    /**
    * @brief оператор ввода
    * @param is поток ввода
    * @param list линейный двусвязный список
    */
    friend std::istream& operator>>(std::istream& is, DoublyLinkedList& list);

    /**
    * @brief добавляет узел в список
    * @param index порядоковый номер элемента
    * @param value содержимое элемента
    */
    void insert(size_t index, int value); 
    /**
    * @brief удаляет элемент из списка
    * @param index порядковый номер элемента
    */
    void remove(size_t index);
    /**
    * @brief проверяет присутствие элемента в списке
    * @param value содержимое элемента
    * @param index порядковый номер элемента
    */
    bool find(int value, size_t index) const;
    /**
    * @brief изменяет содержимое элемента
    * @param index порядковый номер элемента
    * @param newValue новое содержимое элемента
    */
    void modify(size_t index, int newValue); 
    /**
    * @brief проверяет пустой ли список
    */
    bool isEmpty() const; 
    /**
    * @brief сериализация в строку
    */
    std::string toString() const; 
};
