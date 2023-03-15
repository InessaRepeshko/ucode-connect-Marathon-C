#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);
int mx_strlen(const char *s);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str) {
    char *temp = mx_strtrim(str);
    
    if (str == NULL
        || temp == NULL) {
        return NULL;
    }
    
    int counter = 0;
    
    for (int i = 0; i < mx_strlen(temp) - 1; i++) {
        if (mx_isspace(temp[i])
            && mx_isspace(temp[i + 1])) {
            counter++;
        }
    }
    
    char *result = mx_strnew(mx_strlen(temp) - counter);
    int j = 0;
    
    for (int i = 0; i < mx_strlen(temp); i++) {
        if (mx_isspace(temp[i])
            && !mx_isspace(temp[i + 1])) {
            result[j] = ' ';
            j++;
        }
        else if (!mx_isspace(temp[i])) {
            result[j] = temp[i];
            j++;
        }
    }
    
    mx_strdel(&temp);
    
    return result;
}

