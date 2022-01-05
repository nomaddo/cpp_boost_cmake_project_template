#include <gtest/gtest.h>

#include "../src/lib.hpp"

TEST(fact_test, fact_3_is_6)
{
    assert(fact(3) == 6);
}

TEST(fact_test, fact_4_is_24)
{
    assert(fact(4) == 24);
}