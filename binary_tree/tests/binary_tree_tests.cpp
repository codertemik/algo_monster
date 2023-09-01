#include <binary_tree/node.h>

#include <gtest/gtest.h>

TEST(BinaryTreeTest, CreateNode) {
	auto node = std::make_unique<binary_tree::Node<int>>(123);
	ASSERT_EQ(node->val, 123);
	ASSERT_EQ(node->left, nullptr);
	ASSERT_EQ(node->right, nullptr);
}

TEST(BinaryTreeTest, Serialize) {
	auto node = std::make_unique<binary_tree::Node<int>>(123);
	auto result = binary_tree::serialize(node.get());
	ASSERT_EQ(std::string("123"), result);
}

TEST(BinaryTreeTest, Deserialize) {
	auto node = std::make_unique<binary_tree::Node<int>>(123);
	auto result = binary_tree::deserialize("123");
	ASSERT_EQ(result->val, 123);
	ASSERT_EQ(node->left, nullptr);
	ASSERT_EQ(node->right, nullptr);
}


