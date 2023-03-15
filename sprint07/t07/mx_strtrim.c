#include <stdbool.h>
#include <stdio.h>

void mx_strdel(char **str);
int mx_strlen(const char *s);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    
    int i = 0;
    int j = 0;
    char *dst = NULL;
    
    while (mx_isspace(str[i])) {
        i++;
    }
    
    j = mx_strlen(str) - 1;
    
    while (mx_isspace(str[j])) {
        j--;
    }

    dst = mx_strnew(j - i + 1);
    dst = mx_strncpy(dst, &(str[i]), j - i + 1);
    return dst;
}

