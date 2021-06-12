#ifndef __EXAMPLE_HPP
#define __EXAMPLE_HPP

#include <complex.hpp>

extern "C" {
    #include <points.h>
}

int function_using_class (void);
int is_greater_10 (int a);
complex sum_array_complex(complex*buf, int n);
point_t sum_points(point_t*buf, int n);
int Sum(int a, int b);


#endif /* __EXAMPLE_HPP */