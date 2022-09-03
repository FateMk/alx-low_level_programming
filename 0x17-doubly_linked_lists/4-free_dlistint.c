# include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to list
 */
 void free_dlistint(dlistint_t *head)
 {
    dlistint_t *tmp, * hl;

    if (head == NULL)
        return;
    tmp = head;
    while (tmp->prev)
        tmp = tmp->prev;
    while (tmp)
    {
        hl = tmp;
        tmp = tmp->next;
        free(hl);
    }
 }
