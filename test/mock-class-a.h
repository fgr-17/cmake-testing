#ifndef __MOCK_CLASS_A_HPP 
#define __MOCK_CLASS_A_HPP

class mock_A: public A {

public:

    // virtual void print() const { std::cout << var1 << std::endl;}

    MOCK_METHOD(void, print, () );
    MOCK_METHOD(int, get, ());
    MOCK_METHOD(void, set, (int));
};

#endif // __MOCK_CLASS_A_HPP