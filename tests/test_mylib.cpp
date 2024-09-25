#include <gtest/gtest.h>
#include "mylib.hpp"

TEST(MyLibTest, SumTest) {
    EXPECT_EQ(sum(1, 2, 3), 6);
}

TEST(MyLibTest, SumTest2) {
    EXPECT_EQ(try_to_sum(1, 2, 3), 6);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}