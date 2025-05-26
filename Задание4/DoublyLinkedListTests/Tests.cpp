#include <gtest/gtest.h>
#include "DoublyLinkedList.h"

TEST(DoublyLinkedListTest, ConstructorInitializerList) {
    DoublyLinkedList list = { 1, 2, 3 };
    EXPECT_EQ(list.toString(), "1, 2, 3");
}

TEST(DoublyLinkedListTest, CopyConstructor) {
    DoublyLinkedList list = { 1, 2, 3 };
    DoublyLinkedList copy = list;
    EXPECT_EQ(copy.toString(), "1, 2, 3");
}

TEST(DoublyLinkedListTest, MoveConstructor) {
    DoublyLinkedList list = { 1, 2, 3 };
    DoublyLinkedList moved = std::move(list);
    EXPECT_EQ(moved.toString(), "1, 2, 3");
    EXPECT_TRUE(list.isEmpty());
}

TEST(DoublyLinkedListTest, Insert) {
    DoublyLinkedList list;
    list.insert(0, 1);
    list.insert(1, 2);
    list.insert(1, 3);
    EXPECT_EQ(list.toString(), "1, 3, 2");
}

TEST(DoublyLinkedListTest, Remove) {
    DoublyLinkedList list = { 1, 2, 3, 4 };
    list.remove(1);
    EXPECT_EQ(list.toString(), "1, 3, 4");
}

TEST(DoublyLinkedListTest, Find) {
    DoublyLinkedList list = { 1, 2, 3, 4 };
    size_t index;
    EXPECT_TRUE(list.find(3, index));
    EXPECT_EQ(index, 2);
    EXPECT_FALSE(list.find(5, index));
}

TEST(DoublyLinkedListTest, Modify) {
    DoublyLinkedList list = { 1, 2, 3 };
    list.modify(1, 10);
    EXPECT_EQ(list.toString(), "1, 10, 3");
}

TEST(DoublyLinkedListTest, IsEmpty) {
    DoublyLinkedList list;
    EXPECT_TRUE(list.isEmpty());
    list.insert(0, 1);
    EXPECT_FALSE(list.isEmpty());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}