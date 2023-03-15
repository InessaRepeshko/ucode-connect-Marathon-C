#include "../inc/list.h"

void mx_write_to_file(t_list *list, char *filename) {
    int file_descr = open(filename, O_TRUNC | O_WRONLY | O_CREAT | O_APPEND);
    t_list *current = list;

    while (current != NULL) {
        write(file_descr, ((t_song *) current->data)->artist, mx_strlen(((t_song *) current->data)->artist));
        write(file_descr, ",", 1);
        write(file_descr, ((t_song *) current->data)->name, mx_strlen(((t_song *) current->data)->name));
        write(file_descr, "\n", 1);
        current = current->next;
    }
}

