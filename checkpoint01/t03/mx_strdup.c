#include <stdio.h>
#include <stdlib.h>

static char *mx_strnew(const int size) {
    if (size < 0) {
        return NULL;
    }
    
    char *str = (char *) malloc(sizeof(char) * (size + 1));

    for (int i = 0; i < size; i++) {
        str[i] = '\0';
    }
    
    return str;
}

static char *mx_strcpy(char *dst, const char *src) {
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }

    dst[i] = '\0';
    
    return dst;
}

static int mx_strlen(const char *s) {
    int i = 0;
    
    while (s[i]) {
        i++;
    }

    return i;
}

char *mx_strdup(const char *str) {
    int len = mx_strlen(str);
    char *dst = mx_strnew(len);
    dst = mx_strcpy(dst, str);
    
    return dst;
}

