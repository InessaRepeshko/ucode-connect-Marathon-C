#include <stdio.h>
#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strjoin(char const *s1, char const *s2) {
    char *str;

    if (s1 == NULL && s2 != NULL) {
        str = mx_strdup(s2);
    }
    else if (s2 == NULL && s1 != NULL) {
        str = mx_strdup(s1);
    }
    else if (s1 == NULL && s2 == NULL) {
        return NULL;
    }
    else {
        str = mx_strdup(s1);
        str = mx_strcat(str, s2);
    }

    return str;
}

