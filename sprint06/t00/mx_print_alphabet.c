void mx_printchar(char c);

void mx_print_alphabet(void) {
    for(char i = 65; i <= 90; i++) {
        mx_printchar(i);
            i++;
        mx_printchar(i+32);
    }

    mx_printchar(10);
}

