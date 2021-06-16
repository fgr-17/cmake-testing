#ifndef __CLASS_A_HPP
#define __CLASS_A_HPP

#include <iostream>

class A {

public:
    A(): var1(0) {}
    A(int a): var1(a) {}
    virtual ~A() {}
    virtual void print() { std::cout << var1 << std::endl;}
    virtual int get() {return var1;}
    virtual void set(int i) {var1 = i;}

private:

    int var1;

};


#endif /* __CLASS_A_HPP */