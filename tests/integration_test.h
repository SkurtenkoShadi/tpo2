#ifndef INTEGRATION_TEST_H
#define INTEGRATION_TEST_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <math.h>

extern "C" {
#include "myfunc.h"
}

TEST(mysqrtTest, integr) {
    double* res = (double*)malloc(2 * sizeof(double));
    my_sqrt(res, 2, -1, -15);
    ASSERT_EQ(fibonachi((int)res[0]), 2);
    ASSERT_EQ(fibonachi((int)res[1]), 0);
}

#endif 
