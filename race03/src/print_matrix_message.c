#include "../inc/header.h"

bool print_matrix_message() {
    char *messages[4] = {
        "Wake up, Neo...",
        "The Matrix has you...",
        "Follow the white rabbit",
        "Knock, knock, Neo"
    };

    refresh();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);

    int i = 0;

    while (i < 4) {
        for (int j = 0; j < mx_strlen(messages[i]); j++) {
            mvaddch(5, j + 4, messages[i][j] | COLOR_PAIR(1) );
            refresh();
            usleep(200000);
            nodelay(stdscr,TRUE);

            char ch = getch();

            if (ch == 'q') {
                return false;
            }
        }

        usleep(200000);
        clear();
        i++;
    }

    return true;
}

