#include <stdio.h>
#include <stdlib.h>

#define IWIDTH 256
#define IHEIGHT 256

int
main(void)
{
        printf("P3\n %d %d\n255\n", IWIDTH, IHEIGHT);

        for (int j = 0; j < IHEIGHT; ++j) {
                for (int i = 0; i < IWIDTH; ++i) {
                        double r = (double)i / (IWIDTH - 1);
                        double g = (double)j / (IHEIGHT - 1);
                        double b = 0;

                        int ir = (int)(255.999 * r);
                        int ig = (int)(255.999 * g);
                        int ib = (int)(255.999 * b);

                        printf("%d %d %d\n", ir, ig, ib);
                }
        }

        return EXIT_SUCCESS;
}
