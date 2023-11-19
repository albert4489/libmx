#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void*, void*)) {
    if (lst == NULL || cmp == NULL)
        return NULL;

    for (t_list *i = lst; i->next != NULL; i = i->next) {
        for (t_list *j = i->next; j != NULL; j = j->next) {
            if (cmp(i->data, j->data)) {
                void *temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
    return lst;
}
