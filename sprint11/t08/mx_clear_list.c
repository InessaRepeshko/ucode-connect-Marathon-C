#include "list.h"

void mx_clear_list(t_list **list) {
    if (list == NULL
        || (*list) == NULL) {
        return;
    }

    while (*list) {
        t_list *temp_node = *list;

        if ((*list)->next) {
            *list = (*list)->next;
            free(temp_node);
        } else {
            free(temp_node);
            *list = NULL;

            return;
        }
    }
}

