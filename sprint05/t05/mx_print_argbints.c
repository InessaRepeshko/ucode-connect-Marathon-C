#include <stdbool.h>
#include <stdio.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        int num = mx_atoi(argv[i]);

        for (int j = 31; j >= 0; j--) {
            int key = num >> j;

            if (key & 1) {
                mx_printint(1);
            }
            else {
                mx_printint(0);
            }
        }

        mx_printchar('\n');
    }

    return 0;
}

