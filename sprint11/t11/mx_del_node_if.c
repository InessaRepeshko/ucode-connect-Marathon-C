#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *buffer;
    t_list *head_buffer = *list;

    if ((buffer = (*list)->next)) {
        while (buffer->next) {
            if (cmp(buffer->data, del_data)) {
                head_buffer->next = buffer->next;
                free(buffer);
                buffer = head_buffer->next;
            } else {
                head_buffer = head_buffer->next;
                buffer = buffer->next;
            }
        }

        if (cmp(buffer->data, del_data)) {
            head_buffer->next = NULL;
            free(buffer);
        }

        buffer = *list;

        if (cmp(buffer->data, del_data)) {
            (*list) = (*list)->next;
            free(buffer);
        }
    }
    else if (cmp(head_buffer->data, del_data))
        free(*list);
}

