#ifndef LOG_H
#define LOG_H

#ifdef LOG_DEBUG
#define DBG(fmt, args...) \
        do { \
                fprintf(stdout, "DEBUG: %s:%d:%s(): " fmt, __FILE__, __LINE__, __func__, ##args); \
        } while(0)
#else
#define DBG(fmt, args...) \
        do {} while(0)
#endif


#define INFO_TAG    "INFO"

#define LOG(tag, fmt, msg...) \
        do { \
        time_t now; \
        time(&now); \
        printf("%s [%s]: " fmt, ctime(&now), tag, ##msg); \
        } while(0)

#endif /* LOG_H */
