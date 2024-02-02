#include "../include/vec3.h"

struct vec3
mult(struct vec3 const v, double const t)
{
        struct vec3 r = {
                v.x * t,
                v.y * t,
                v.z * t
        };
        return r;
}

struct vec3
add(struct vec3 const v, struct vec3 const p)
{
        struct vec3 r = {
                v.x + p.x,
                v.y + p.y,
                v.z + p.z
        };
        return r;
}
