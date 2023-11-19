#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    if(*head == NULL) {
        return;
    }
    t_list *curr = *head;
    if(curr->next == NULL) {
        free(curr);
        *head = NULL;
    } else {
        t_list *prev = NULL;
        while(curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }
        free(curr);
        prev->next = NULL;
    }
}
