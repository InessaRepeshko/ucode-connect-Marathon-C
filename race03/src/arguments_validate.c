#include "../inc/header.h"

bool get_creative_flag(int argc, char *argv[]) {
    if (argc > 2) {
        mx_printerr("usage: ./matrix_rain [-c]\n");
        
        exit(0);
    }
    else if (argc == 2 && (mx_strcmp(argv[1], "-c") != 0)) {
        mx_printerr("usage: ./matrix_rain [-c]\n");
        
        exit(0);
    }
    else if (argc == 2 && (mx_strcmp(argv[1], "-c") == 0)) {
        return true;
    }
    else {
        return false;
    }
}

