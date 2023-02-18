#include "../inc/header.h"

int main(int argc, char *argv[]) {
    bool creative_flag = get_creative_flag(argc, argv);
    srand(time(NULL) / 2);

    setlocale(LC_ALL, "");
    initscr(); 
    curs_set(0); 
    start_color();

    print_matrix_rain(creative_flag);
    endwin();
    
    return 0;
}

