#ifndef __CLASS_A_HPP
#define __CLASS_A_HPP

#include <iostream>

class A {

public:
    A(): var1(0) {}
    virtual ~A() {}
    virtual void print() const { std::cout << var1 << std::endl;}
    virtual int get() const {return var1;}
    virtual void set(int i) {var1 = i;}

private:

    int var1;

};


#endif /* __CLASS_A_HPP */