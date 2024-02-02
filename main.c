#include <stdio.h>
#include <stdlib.h>

#define DBG

#include "main.h"
#include "include/color.h"
#include "include/logger.h"

int
main(void)
{
        size_t const BUFFSIZE = (IWIDTH * IHEIGHT * 4 * 3) + 12;

        char picture[BUFFSIZE];
        size_t index = 0;

        index += (size_t)snprintf(picture + index, BUFFSIZE - index, "P3\n %d %d\n255\n", IWIDTH, IHEIGHT);

        Dzu("BUFFSIZE: ", BUFFSIZE);

        for (size_t j = 0; j < IHEIGHT; ++j) {
                for (size_t i = 0; i < IWIDTH; ++i) {
                        double r = (double)i / (IWIDTH - 1);
                        double g = (double)j / (IHEIGHT - 1);
                        double b = 0;
                        struct color pixel_color = { r, g, b};

                        index += (size_t)snprintf(picture + index, BUFFSIZE - index, "%d ", (int)(255.999 * pixel_color.r));
                        index += (size_t)snprintf(picture + index, BUFFSIZE - index, "%d ", (int)(255.999 * pixel_color.g));
                        index += (size_t)snprintf(picture + index, BUFFSIZE - index, "%d\n", (int)(255.999 * pixel_color.b));
                }
        }

        FILE * file = fopen("img.ppm", "w");

        if (!file) {
                return EXIT_FAILURE;
        }

        Dzu("INDEX: ", index);

        fwrite(picture, sizeof *picture, index, file);

        fclose(file);

        return EXIT_SUCCESS;
}
