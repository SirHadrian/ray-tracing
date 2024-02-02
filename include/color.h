#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <stdio.h>

struct color {
        double r, g, b;
};

void write_color(struct color pixel_color);

#endif
