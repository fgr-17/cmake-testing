#include <Example.hpp>
#include <complex.hpp>

complex sum_array_complex(complex*buf, int n) {
    int i;
    complex ret{};
    for (i = 0; i < n; i++) {
        ret.im+=buf[i].im;
        ret.re+=buf[i].re;
    }
    return ret;
}


int Sum(int a, int b) {

    return a+b;

}