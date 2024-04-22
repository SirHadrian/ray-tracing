#ifndef RAY_H
#define RAY_H

#include "vec3.h"

struct ray {
        struct vec3 origin, direction;
};

struct vec3 at(struct ray const ray, double const t);

#endif /* RAY_H */
