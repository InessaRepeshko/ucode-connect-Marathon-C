#include "../inc/header.h"

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

