#include <gtest/gtest.h>
#include <vector>

std::vector<int> fibonacci(int n);

TEST(FibonacciTest, HandlesZeroInput) {
    std::vector<int> result = fibonacci(0);
    EXPECT_TRUE(result.empty());
}

TEST(FibonacciTest, HandlesPositiveInput) {
    std::vector<int> expected = {0, 1, 1, 2, 3, 5, 8};
    std::vector<int> result = fibonacci(7);
    EXPECT_EQ(result, expected);
}

TEST(FibonacciTest, HandlesSingleInput) {
    std::vector<int> expected = {0};
    std::vector<int> result = fibonacci(1);
    EXPECT_EQ(result, expected);
}

TEST(FibonacciTest, HandlesDoubleInput) {
    std::vector<int> expected = {0, 1};
    std::vector<int> result = fibonacci(2);
    EXPECT_EQ(result, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}