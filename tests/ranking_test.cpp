#include <core/ranking.h>
#include <gtest/gtest.h>

TEST(RankingTests, TestFlaky)
{
    const auto expected = 1;
    const auto actual = 1;
    ASSERT_EQ(expected, actual);
}

// TEST(RankingTests, TestFlaky2)
// {
//     const auto expected = 1;
//     const auto actual = 2;
//     ASSERT_EQ(expected, actual);
// }

// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }