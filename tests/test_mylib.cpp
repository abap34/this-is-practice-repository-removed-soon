#include <gtest/gtest.h>
#include "src/mylib.hpp"

TEST(MyLibTest, SumTest) {
    EXPECT_EQ(sum(1, 2, 3), 6);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}