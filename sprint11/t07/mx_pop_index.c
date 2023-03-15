#include "list.h"

static int mx_list_size(t_list *list) {
    int size = 0;
    t_list *node = list;

    while (node != NULL) {
        node = node->next;
        size++;
    }

    return size;
}

void mx_pop_index(t_list **list, int index) {
    if (list == NULL
        || (*list) == NULL) {
        return;
    } else {
        int size = mx_list_size(*list);

        if (index <= 0) {
            mx_pop_front(list);
        } else if (index >= size) {
            mx_pop_back(list);
        } else {
            t_list *current = *list;

            for (int i = 0; i < index - 1; i++) {
                current = current->next;
            }

            t_list *node_pop = current->next;
            current->next = node_pop->next;
            free(node_pop);
        }
    }
}

