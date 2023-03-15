void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    int last = 0;

    for (int i = 0; argv[0][i] != '\0'; i++) {
        if (argv[0][i] == 47) {
            last = i;
        }
    }

    for (int i = last + 1; argv[0][i] != '\0'; i++) {
        mx_printchar(argv[0][i]);
    }

    mx_printchar(10);

    return argc;
}

