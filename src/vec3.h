#ifndef VEC3_H
#define VEC3_H

struct vec3 {
        double x, y, z;
};

struct vec3 add(struct vec3 const u, struct vec3 const v);
struct vec3 mult(struct vec3 const u, double const t);

#endif

