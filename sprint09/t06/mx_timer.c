#include <time.h>

double mx_timer(void (*f)()) {
    if (clock() < 0
        || *f == NULL) {
        return -1;
    }

    clock_t start = clock();
    f();
    clock_t end = clock();

    return (start == (clock_t)(-1) || end == (clock_t)(-1)) ? -1 : (double) (end - start) / CLOCKS_PER_SEC;
}

