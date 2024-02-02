#include "../include/ray.h"

struct vec3
at(struct ray const ray, double const t)
{
        return add(ray.origin, mult(ray.direction, t));
}
