#include "list.h"

void mx_pop_back(t_list **list) {
    if (list
        && list != NULL
        && (*list)
        && (*list) != NULL) {
        t_list *current_node = *list;
        t_list *previous_node = *list;

        while (current_node->next != NULL) {
            current_node = current_node->next;

            if (previous_node->next->next != NULL) {
                previous_node = previous_node->next;
            }
        }

        current_node->data = NULL;
        free(current_node);
        current_node = NULL;
        previous_node->next = NULL;
    }
}

