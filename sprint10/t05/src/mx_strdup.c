#include "../inc/header.h"

char *mx_strdup(const char *str) {
    int len = mx_strlen(str);
    char *dst = mx_strnew(len);
    dst = mx_strcpy(dst, str);

    return dst;
}

