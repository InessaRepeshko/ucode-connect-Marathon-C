#include <string.h>

int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    const char *buffer = str;

    if (mx_strlen(sub) == 0) {
        return 0;
    }
    
    while (mx_strstr(buffer, sub) != NULL) {
        buffer = mx_strstr(buffer, sub);

        for (int i = 0; i < mx_strlen(sub); i++) {
            buffer++;
        }

        count++;
    }

    return count;
}

