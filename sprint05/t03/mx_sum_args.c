#include <stdio.h>
#include <stdbool.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc < 2) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        int converted = 1;
        int flag = 0;
        int num = 0;

        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (j == 0 && argv[i][j] == '-') {
                flag = 1;
                continue;
            }
            
            if (j == 0 && argv[i][j] == '+') {
                flag = 0;
                continue;
            }
            
            if (mx_isdigit(argv[i][j]) == false) {
                converted = 0;
                break;
            }

            num = 10 * num + (int)argv[i][j] - 48;
        }

        if (converted == 1) {
            if (!flag) {
                sum += num;
            }
            else {
                sum -= num;
            }
        }
    }
    
    mx_printint(sum);
    mx_printchar('\n');

    return 0;
}

