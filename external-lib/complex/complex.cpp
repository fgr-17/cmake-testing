#include "complex.hpp"

complex add_complex(complex a, complex b) {
    complex ret;

    ret.re = a.re + b.re;
    ret.im = a.im + b.im;

    return ret;

}