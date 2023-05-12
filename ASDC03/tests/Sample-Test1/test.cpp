#include "gtest/gtest.h"
#include "lab3_binary_tree.cpp"


TEST(BinaryTreeTest, InsertTest) {
    
    BinaryTreeNode* root = nullptr;

    
    insert(root, 10);
    insert(root, 7);
    insert(root, 14);
    insert(root, 5);
    insert(root, 8);

    
    EXPECT_EQ(root->value, 10);
    EXPECT_EQ(root->left->value, 7);
    EXPECT_EQ(root->right->value, 14);
    EXPECT_EQ(root->left->left->value, 5);
    EXPECT_EQ(root->left->right->value, 8);
}
