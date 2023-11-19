#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    if(*head == NULL) {
        return;
    }

    t_list *next_node = NULL;
    next_node = (*head)->next;
    free(*head);
    *head = next_node;
}
