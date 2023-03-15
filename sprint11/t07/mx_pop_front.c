#include "list.h"

void mx_pop_front(t_list **list) {
    if (list
        && list != NULL
        && (*list)
        && (*list) != NULL) {
        t_list *next_node = *list;
        t_list *current_node = *list;

        next_node = next_node->next;
        current_node->next = NULL;
        current_node->data = NULL;
        free(current_node);
        current_node = NULL;
        *list = next_node;
    }
}

