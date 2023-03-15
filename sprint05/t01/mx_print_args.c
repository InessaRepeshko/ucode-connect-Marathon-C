void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar(10);
    }

    return 0;
}

