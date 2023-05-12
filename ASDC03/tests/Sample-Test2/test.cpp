#include "gtest/gtest.h"
#include "lab3_list.hpp"

TEST(ListTest, BasicOperations) {
	List<int> list;
	EXPECT_TRUE(list.empty());
	EXPECT_EQ(list.size(), 0);

	list.push_back(42);
	EXPECT_FALSE(list.empty());
	EXPECT_EQ(list.size(), 1);
	EXPECT_EQ(list.front(), 42);
	EXPECT_EQ(list.back(), 42);

	list.push_back(17);
	EXPECT_EQ(list.size(), 2);
	EXPECT_EQ(list.front(), 42);
	EXPECT_EQ(list.back(), 17);

	list.pop_front();
	EXPECT_EQ(list.size(), 1);
	EXPECT_EQ(list.front(), 17);
	EXPECT_EQ(list.back(), 17);

	list.pop_back();
	EXPECT_TRUE(list.empty());
	EXPECT_EQ(list.size(), 0);
}

TEST(ListTest, Clear) {
	List<int> list;
	list.push_back(42);
	list.push_back(17);
	list.clear();
	EXPECT_TRUE(list.empty());
	EXPECT_EQ(list.size(), 0);
}

TEST(ListTest, Iterator) {
	List<int> list;
	list.push_back(42);
	list.push_back(17);
	auto it = list.begin();
	EXPECT_EQ(*it, 42);
	++it;
	EXPECT_EQ(*it, 17);
	++it;
	EXPECT_EQ(it, list.end());
}

