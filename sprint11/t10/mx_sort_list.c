#include "list.h"

static int mx_list_size(t_list *list) {
    if (list == NULL) {
        return 0;
    }

    int size = 0;
    t_list *node = list;

    while (node != NULL) {
        node = node->next;
        size++;
    }

    return size;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (list == NULL
        || cmp == NULL) {
        return list;
    }

    int size = mx_list_size(list);

    for (int i = 0; i < size; i++) {
        t_list *current_list = list;

        for (int i = 0; i < size - 1; i++) {
            if (cmp(current_list->data, current_list->next->data)) {
                void *temp = current_list->data;
                current_list->data = current_list->next->data;
                current_list->next->data = temp;
            }
            
            current_list = current_list->next;
        }
    }
    
    return list;
}

