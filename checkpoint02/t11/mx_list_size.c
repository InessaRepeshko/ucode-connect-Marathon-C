#include "list.h"

int mx_list_size(t_list *list) {
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

