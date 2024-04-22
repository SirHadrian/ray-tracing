#ifndef UTILS_H
#define UTILS_H

#include <string.h>

#define ERR_N_DIE(errno, msg) \
        do { \
                fprintf(stderr, "ERROR: %s:%d - %s | %s\n", __FILE__, __LINE__, \
                                strerror(errno), msg); \
                exit(EXIT_FAILURE); \
        } while(0)

#define ALLOW_UNUSED    __attribute__((unused))
#define ARRAY_SIZE(x)   (sizeof(x) / sizeof((x)[0]))

typedef unsigned int        uint;
typedef unsigned long int   ulint;
typedef unsigned char       uchar;

#endif /* UTILS_H */
