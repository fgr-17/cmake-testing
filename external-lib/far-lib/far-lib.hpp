#ifndef __FAR_LIB_HPP
#define __FAR_LIB_HPP

class far_lib {

public:

    far_lib(): v(0) {}
    ~far_lib() {}

    void set(int x) {v = x;}
    int get() {return v;}
    void clear() {v = 0;}

private:

    int v;
};

#endif // __FAR_LIB_HPP