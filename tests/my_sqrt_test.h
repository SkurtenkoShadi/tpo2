#ifndef MY_SQRT_H
#define MY_SQRT_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <math.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(mysqrtTest, num4) {
    double* res = (double*)malloc(2 * sizeof(double));
    my_sqrt(res, 1, -7, 6);
    ASSERT_EQ(res[0], 6.00);
    ASSERT_EQ(res[1], 1.00);
}

TEST(mysqrtTest, num0) {
    double* res = (double*)malloc(2 * sizeof(double));
    my_sqrt(res, 3, 1, 2);
    ASSERT_TRUE(isnan(res[1]));
    ASSERT_TRUE(isnan(res[1]));
}

TEST(mysqrtTest, neg) {
    double* res = (double*)malloc(2 * sizeof(double));
    my_sqrt(res, 1, -6, 9);
    ASSERT_EQ(res[0], 3.00);
    ASSERT_TRUE(isnan(res[1]));
}
#endif 
