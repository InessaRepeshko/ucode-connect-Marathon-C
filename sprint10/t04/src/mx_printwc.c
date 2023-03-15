#include "../inc/header.h"

void mx_printwc(int line, int word, int character, int check, char *argv) {
    mx_printchar('\t');
    mx_printint(line);
    mx_printchar('\t');
    mx_printint(word);
    mx_printchar('\t');
    mx_printint(character);

    if (check == 0) {
        mx_printstr(" total\n");
    }
    else if (check == 1) {
        mx_printchar(' ');
        mx_printstr(argv);
        mx_printchar('\n');
    }
    else {
        mx_printchar('\n');
    }
}

