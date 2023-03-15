void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 0;
    }

    for (int i = 0; i < argc - 1; i++) {
        for (int j = i + 1; j < argc; j++) {
            if (mx_strcmp(argv[i], argv[j]) > 0) {
                char* temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar(10);
    }

    return 0;
}

