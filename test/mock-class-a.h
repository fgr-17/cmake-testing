#ifndef __MOCK_CLASS_A_HPP 
#define __MOCK_CLASS_A_HPP

class mock_A: public A {

public:

    MOCK_METHOD(void, print, void );
    MOCK_METHOD(int, get, void);
    MOCK_METHOD(void, set, int);
};

#endif // __MOCK_CLASS_A_HPP