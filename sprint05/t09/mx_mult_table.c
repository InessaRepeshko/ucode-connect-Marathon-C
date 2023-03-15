#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 0;
    }

    int num1 = mx_atoi(argv[1]);
    int num2 = mx_atoi(argv[2]);
    
    if (num1 < 0
        || num2 < 0
        || num1 > 9
        || num2 > 9) {
        return 0;
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++) {
        for (int j = num1; j <= num2; j++) {
            mx_printint(i * j);

            if (j != num2) {
                mx_printchar(9);
            }
        }

        mx_printchar(10);
    }

    return 0;
}

