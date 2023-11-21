
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h> 

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void my_sqrt(double* res, double a, double b, double c)
{
    double d, x1, x2;
    d = b * b - 4 * a * c; 
    if (d > 0) 
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        res[0] = x1;
        res[1] = x2;
    }
    else if (d == 0) 
    {
        x1 = -(b / (2 * a));
        res[0] = x1;
        res[1] = NAN;
    }
    else 
    {
        res[0] = NAN;
        res[1] = NAN;
    }

}
