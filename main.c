#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include "include/color.h"

int
main(void)
{
        int const BUFFSIZE = 600000;

        char picture[BUFFSIZE];
        int index = 0;

        index += sprintf(picture + index, "P3\n %d %d\n255\n", IWIDTH, IHEIGHT);

        for (int j = 0; j < IHEIGHT; ++j) {
                for (int i = 0; i < IWIDTH; ++i) {
                        double r = (double)i / (IWIDTH - 1);
                        double g = (double)j / (IHEIGHT - 1);
                        double b = 0;
                        struct color pixel_color = { r, g, b};

                        index += sprintf(picture + index, "%d ", (int)(255.999 * pixel_color.r));
                        index += sprintf(picture + index, "%d ", (int)(255.999 * pixel_color.g));
                        index += sprintf(picture + index, "%d\n", (int)(255.999 * pixel_color.b));
                }
        }

        FILE * file = fopen("img.ppm", "w");

        if (!file) {
                return EXIT_FAILURE;
        }

        fwrite(picture, sizeof *picture, index, file);

        fclose(file);

        return EXIT_SUCCESS;
}
