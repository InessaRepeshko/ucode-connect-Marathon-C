#include <unistd.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while (s[i]) {
        i++;
    }

    return i;
}

static void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

static void mx_printchar(char c) {
    write(1, &c, 1);
}

int main(int argc, char *argv[] ) {
    if (argc < 2) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar(10);
    }
}

