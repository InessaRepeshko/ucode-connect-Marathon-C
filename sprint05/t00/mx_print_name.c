void mx_printstr(const char *s);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar(10);
    mx_printint(argc);
    mx_printchar(10);

    return 0;
}

