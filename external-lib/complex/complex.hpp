#ifndef __COMPLEX_HPP
#define __COMPLEX_HPP

class complex {

public:
    complex(): re(0), im(0) {}
    ~complex() {}

    float re;
    float im;

};

complex add_complex(complex a, complex b);

#endif // __COMPLEX_HPP
