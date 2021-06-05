#include "points.h"

point_t sum_vector(point_t a, point_t b) {
    point_t ret;

    ret.x = a.x + b.x;
    ret.y = a.y + b.y;
    return ret;
}
