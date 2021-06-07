#include <Example.hpp>
#include <class-a.hpp>

int is_greater_10 (int a) {

    if(a > 10)
        return 1;
    else    
        return 0;
}

complex sum_array_complex(complex*buf, int n) {
    int i;
    complex ret{};
    for (i = 0; i < n; i++) {
        ret = add_complex(ret, buf[i]);
    }
    return ret;
}

point_t sum_points(point_t*buf, int n){
    int i;
    point_t ret;
    for (i = 0; i < n; i++) {
        ret = sum_vector(ret, buf[i]);
    }
    return ret;
}

int Sum(int a, int b) {

    return a+b;

}