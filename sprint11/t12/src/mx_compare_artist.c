#include "../inc/list.h"

bool mx_compare_artist(void *a, void *b) {
    char *str1 = mx_strnew(mx_strlen(((t_song *)a)->artist));
    char *str2 = mx_strnew(mx_strlen(((t_song *)b)->artist));
    mx_strcpy(str1, ((t_song *)a)->artist);
    mx_strcpy(str2, ((t_song *)b)->artist);
    int i = 0;
    
    while (str1[i]) {
        str1[i] = mx_tolower(str1[i]);
        i++;
    }
    
    i = 0;
    
    while (str2[i]) {
        str2[i] = mx_tolower(str2[i]);
        i++;
    }
    
    bool result = false;
    
    if (mx_strcmp(str1, str2) > 0) {
        result = true;
    }
    else {
        result = false;
    }
    
    free(str1);
    free(str2);
    
    return result;
}

