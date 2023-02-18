#include "../inc/header.h"

void print_column(wchar_t *col, int rows, int x, bool is_creative) {
    for (int i = rows - 1; i >= 0; i--) {
        if (is_creative) {
            set_color(((rand() % 6) + 2) * 1);
        }
        else {
            if (col[i + 1] == ' ') {
                set_color(1);
            } else {
                set_color(2);
            }
        }

        if (col[i] != ' ') {
            col[i] = get_symbol();
        }

        mvprintw(i, x * 2, "%lc", col[i]);
    }
}

