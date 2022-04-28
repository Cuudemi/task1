#ifndef SQUAREEQUALITY_TEST_H
#define SQUAREEQUALITY_TEST_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

float x1, x2, x3;
int ret, c;

//whole roots
TEST(WholeRoots, num1) {
    SquareEquality(1, 3, -4, &x1, &x2, &x3);
    ASSERT_FLOAT_EQ(1, x1);
    ASSERT_FLOAT_EQ(-4, x2);
    ASSERT_FLOAT_EQ(0, x3);

}

TEST(WholeRoots, num2) {
    SquareEquality(0, 2, 2, &x1, &x2, &x3);
    ASSERT_FLOAT_EQ(-1, x1);
    ASSERT_FLOAT_EQ(0, x2);
    ASSERT_FLOAT_EQ(0, x3);
}

//fractional roots
TEST(FraclionalRoots, num1) {
    SquareEquality(2, -9, 7, &x1, &x2, &x3);
    ASSERT_FLOAT_EQ(3.5, x1);
    ASSERT_FLOAT_EQ(1, x2);
    ASSERT_FLOAT_EQ(0, x3);
}

//zero discriminant
TEST(ZeroDiscriminant, num1) {
    SquareEquality(1, 6, 9, &x1, &x2, &x3);
    ASSERT_FLOAT_EQ(0, x1);
    ASSERT_FLOAT_EQ(0, x2);
    ASSERT_FLOAT_EQ(-3, x3);
}

//negative discriminant
TEST(NegativeDiscriminant, num1) {
    ret = SquareEquality(1, -2, 50, &x1, &x2, &x3);
    ASSERT_EQ(0, ret);
}

// x is any number
TEST(AnyNum, num1) {
    c = SquareEquality(0, 0, 2, &x1, &x2, &x3);
    ASSERT_EQ(c, c); // where c is any number
}

#endif // SQUAREEQUALITY_TEST_H
