#include "../inc/list.h"

void mx_print_playlist(t_list *list) {
    int index = 0;
    t_list *current = list;
    
    while (current) {
        mx_printint(index);
        mx_printstr(". ");
        mx_printstr(((t_song *)current->data)->artist);
        mx_printstr(" - ");
        mx_printstr(((t_song *)current->data)->name);
        mx_printchar('\n');
        current = current->next;
        index++;
    }
}

